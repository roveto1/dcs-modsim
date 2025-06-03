#!/bin/bash

# Nome do container
container_name="meu_container_vnc"

# Verifica se o container já está em execução
container_status=$(docker ps -q -f name=$container_name)

# Se o container não estiver em execução, inicia o container
if [ -z "$container_status" ]; then
    echo "Iniciando o container '$container_name'..."
    docker-compose up --build -d # Inicia o container em segundo plano
    # Aguarda o container estar pronto
    sleep 5
else
    echo "Container '$container_name' já está em execução."
fi

# Abre o navegador no link do VNC
echo "Abrindo o link do VNC no navegador..."
echo "Link: http://localhost:8080/vnc.html?host=localhost&port=8080"
google-chrome --no-sandbox --app="http://localhost:8080/vnc.html?host=localhost&port=8080" &  # Substitua google-chrome se necessário
chrome_pid=$!

# Verifica se o container está em execução
if docker ps -q -f name="$container_name"; then
    # Aguardar o término do processo dentro do container
    echo "Aguardando o processo dentro do container finalizar..."
    docker wait "$container_name"
    # Após o processo terminar, derruba o container
    echo "Processo finalizado. Parando o container..."
    docker stop "$container_name"
    docker rm "$container_name"
else
    echo "O container não está mais em execução."
fi
echo "Fechando a janela do VNC (Chrome)..."
kill $chrome_pid 2>/dev/null