#!/bin/bash
if [[ $REMOTE == 1 ]]; then
    echo "Executando a partir do código remoto"
    git -C $GENESYS_ROOT fetch --all
    git -C $GENESYS_ROOT reset --hard origin/$GENESYS_BRANCH
else
    echo "Executando a partir do código local"
fi

# cd "$GENESYS_ROOT/source/applications/gui/qt/GenesysQtGUI"
# mkdir -p build
# cd build
# cmake ..
# make -j$(nproc)

if [[ $1 == "gui" ]]; then
    # echo $GENESYS_ROOT/$GENESYS_QT_PROJECT_SUBPATH
    # qmake6 $GENESYS_ROOT/$GENESYS_QT_PROJECT_SUBPATH
    # make -C $GENESYS_ROOT/$GENESYS_GUI_SUBPATH -j$(nproc)
    echo $GENESYS_ROOT/$GENESYS_GUI_SUBPATH/$GENESYS_GUI_BIN
    $GENESYS_ROOT/$GENESYS_GUI_SUBPATH/$GENESYS_GUI_BIN
elif [[ $1 == "nogui" ]]; then
    $GENESYS_ROOT/$GENESYS_NOGUI_SUBPATH
elif [[ $1 == "qt" ]]; then
    echo $(id -u)
    mkdir -p /run/user/$(id -u)
    chmod 700 /run/user/$(id -u)
    git config --global --add safe.directory $GENESYS_ROOT
    echo $GENESYS_ROOT/$GENESYS_PROJECT_SUBPATH
    /usr/bin/qtcreator $GENESYS_ROOT/$GENESYS_PROJECT_SUBPATH
elif [[ $1 == "debug" ]]; then
    cd $GENESYS_ROOT
    /bin/bash 
elif [[ $1 == "shell" ]]; then
    make -C projects/GenesysTerminalApplication
    $GENESYS_ROOT/$GENESYS_NOGUI_SUBPATH
fi

