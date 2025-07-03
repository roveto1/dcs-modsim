source ./scripts/env.sh

if docker image inspect $GENESYS_IMAGE >/dev/null 2>&1; then
    echo "Removendo imagem do GenESyS..."
    docker rmi $GENESYS_IMAGE
else
    echo "Imagem do GenESyS não encontrada. Nenhuma ação necessária."
    exit 0
fi