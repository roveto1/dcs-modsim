source config.sh

FILE="../source/applications/TraitsApp.h"

# Regular expression to search for
PATTERN='runGraphicalUserInterface\s*=\s*true'

# Perform the search
if ! grep -E "$PATTERN" "$FILE" > /dev/null; then
    echo "Projeto não configurado para executar a GUI do GenESyS."
    echo "Por favor, edite o arquivo /source/applications/TraitsApp.h e defina runGraphicalUserInterface como true."
    exit 1
fi

# Cria o binário da GUI do GenESyS TESTE
cd $GENESYS_PROJECT/$GENESYS_QT_PROJECT_SUBPATH
qmake6 $GENESYS_QT_PROJECT
cd $GENESYS_PROJECT/$GENESYS_GUI_SUBPATH
make -j12