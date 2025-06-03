#!/bin/bash

# Iniciar display virtual
Xvfb :1 -screen 0 1920x1080x24 &
export DISPLAY=:1

# Iniciar gerenciador de janelas
fluxbox &

# Iniciar servidor VNC
x11vnc -display :1 -nopw -forever -shared &
vnc_pid=$!

# Iniciar noVNC
cd /opt/novnc
./utils/novnc_proxy --vnc localhost:5900 --listen 8080 &
novnc_pid=$!

# Iniciar a aplicação principal (Tkinter etc.)
python3 /app/main.py
exit_code=$?

echo "main.py terminou com código $exit_code. Encerrando serviços..."

# Encerrar os serviços auxiliares
kill $vnc_pid
kill $novnc_pid

# Esperar os processos finalizarem corretamente
wait $vnc_pid
wait $novnc_pid

# Encerrar o container com o código de saída da aplicação
exit $exit_code
