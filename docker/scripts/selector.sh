source ./scripts/env.sh

while true
do
read -p "
Menu: O que deseja executar?
.............................
1. GenESyS GUI
2. GenESyS Shell
3. IDE do GenESyS (QtCreator)
4. Debug GenESyS Image
5. Remover imagem do GenESyS
6. Abrir arquivo de configuração do ambiente Docker
7. Sair
> " input
echo ""
case "$input" in
    "1")
    bash ./scripts/gui.sh
    ;;
    "2")
    bash ./scripts/shell.sh
    ;;
    "3")
    bash ./scripts/qt.sh
    ;;
    "4")
    bash ./scripts/debug.sh
    ;;
    "5")
    bash ./scripts/remove_image.sh
    ;;
    "6")
    if command -v xdg-open > /dev/null; then
        if command -v nohup > /dev/null; then
            echo "Abrindo arquivo de configuração."
            echo "Se o arquivo não abrir automaticamente, você pode encontrá-lo em:"
            echo "$(pwd)/config.sh"
            nohup xdg-open config.sh > /dev/null 2>&1 &
        fi
    else
        echo "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"
        echo Arquivo de configuração não pode ser aberto automaticamente, mas pode ser encontrado em:
        echo "$(pwd)/config.sh"
        echo "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"
    fi
    ;;
    "7")
    exit 0
    ;;
    *)
    echo -e "\nOpção inválida."
    ;;
esac
done
