source ./scripts/env.sh

if ! docker image inspect $GENESYS_IMAGE >/dev/null 2>&1; then
    echo "Imagem do GenESyS não encontrada. Iniciando o build..."
    bash ./scripts/build.sh
fi

if docker image inspect $GENESYS_IMAGE >/dev/null 2>&1; then
    xhost local:root
    if [[ $REMOTE == 1 ]]; then 
        docker run --name genesys --rm -ti --net=host --ipc=host \
            -e DISPLAY=$DISPLAY \
            -e MESA_LOADER_DRIVER_OVERRIDE=$MESA_LOADER_DRIVER_OVERRIDE \
            -e GENESYS_QT_PROJECT_SUBPATH=$GENESYS_QT_PROJECT_SUBPATH \
            -e QT_X11_NO_MITSHM=1 \
            -e XDG_RUNTIME_DIR=/run/user/$(id -u) \
            -e REMOTE=$REMOTE \
            -v /tmp/.X11-unix:/tmp/.X11-unix \
            -v /dev/dri:/dev/dri \
            --device /dev/dri \
            $GENESYS_IMAGE qt
    else
        docker run --name genesys --rm -ti --net=host --ipc=host \
            -e DISPLAY=$DISPLAY \
            -e REMOTE=$REMOTE \
            -e MESA_LOADER_DRIVER_OVERRIDE=$MESA_LOADER_DRIVER_OVERRIDE \
            -e GENESYS_ROOT=$GENESYS_ROOT \
            -e GENESYS_QT_PROJECT_SUBPATH=$GENESYS_QT_PROJECT_SUBPATH \
            -e QT_X11_NO_MITSHM=1 \
            -e XDG_RUNTIME_DIR=/run/user/$(id -u) \
            -v /tmp/.X11-unix:/tmp/.X11-unix \
            -v $GENESYS_PROJECT:$GENESYS_ROOT \
            -v /dev/dri:/dev/dri \
            --device /dev/dri \
            $GENESYS_IMAGE qt
    fi
else
    echo "Build não executado"
fi
