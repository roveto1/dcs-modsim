source ./scripts/env.sh

if [ $DOCKER_CACHE == 0 ]; then
    docker build --build-arg GENESYS_REPO=$GENESYS_REPO --build-arg GENESYS_BRANCH=$GENESYS_BRANCH --build-arg GENESYS_ROOT=$GENESYS_REMOTE_ROOT -f $GENESYS_DOCKERFILE -t $GENESYS_IMAGE --no-cache .
else
    docker build --build-arg GENESYS_REPO=$GENESYS_REPO --build-arg GENESYS_BRANCH=$GENESYS_BRANCH --build-arg GENESYS_ROOT=$GENESYS_REMOTE_ROOT -f $GENESYS_DOCKERFILE -t $GENESYS_IMAGE .
fi