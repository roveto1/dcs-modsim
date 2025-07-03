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
5. Remover imagem do GenESyS e sair
6. Sair da aplicação
> " input

    if [ "$input" == "6" ]; then
        break
    fi

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
        exit 0
        ;;
        "6")
        exit 0
        ;;
        *)
        echo -e "\nOpção inválida."
        ;;
    esac
done
