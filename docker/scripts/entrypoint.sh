#!/bin/bash

GENESYS_ROOT=""
if [[ $REMOTE == 1 ]]; then
    GENESYS_ROOT=$GENESYS_REMOTE_ROOT
    echo "Executando a partir do código remoto"
    git -C $GENESYS_ROOT fetch --all
    git -C $GENESYS_ROOT pull
    git -C $GENESYS_ROOT reset --hard origin/$GENESYS_BRANCH
else
    GENESYS_ROOT=$GENESYS_LOCAL_ROOT
    echo "Executando a partir do código local"
fi

if [[ $1 == "gui" ]]; then
    $GENESYS_ROOT/$GENESYS_GUI_SUBPATH/$GENESYS_GUI_BIN

elif [[ $1 == "nogui" ]]; then
    $GENESYS_ROOT/$GENESYS_NOGUI_SUBPATH

elif [[ $1 == "qt" ]]; then
    mkdir -p /run/user/$(id -u)
    chmod 700 /run/user/$(id -u)
    git config --global --add safe.directory $GENESYS_ROOT
    /usr/bin/qtcreator $GENESYS_ROOT/$GENESYS_QT_PROJECT_SUBPATH

elif [[ $1 == "debug" ]]; then
    cd $GENESYS_ROOT
    /bin/bash 

elif [[ $1 == "shell" ]]; then
    $GENESYS_ROOT/$GENESYS_NOGUI_SUBPATH

fi

