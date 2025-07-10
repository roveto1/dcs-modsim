FROM ubuntu:24.04

ARG VERSION=0.1.0

# Set arguments
ARG GENESYS_REPO
ARG GENESYS_BRANCH
ARG GENESYS_ROOT

# Set default values for environment variables
ENV GENESYS_REPO=${GENESYS_REPO}
ENV GENESYS_BRANCH=${GENESYS_BRANCH}
ENV GENESYS_ROOT=${GENESYS_ROOT}

LABEL url=$GENESYS_REPO \
      name="docker-genesys" \
      version=$VERSION

# Install only required packages and GitHub CLI, then clean up
RUN apt-get update && apt-get upgrade -y && \
        DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
        ca-certificates \
        build-essential \
        cmake \
        make \
        g++ \
        curl \
        git \
        libclang1 \
        libgl1-mesa-dri \
        mesa-vulkan-drivers \
        qtcreator \
        qt6-base-dev \
        qt6-tools-dev \
        qt6-tools-dev-tools \
        libqt6opengl6-dev \
        libqt5gui5 \
        libqt5core5a \
        libqt5widgets5 \
        libxcb1 \
        libx11-6 \
        libx11-xcb1 \
        libxext6 \
        libxrender1 \
        libxkbcommon0 \
        libxcb-render0 \
        libxcb-shape0 \
        libxcb-xfixes0 \
    && curl -fsSL https://cli.github.com/packages/githubcli-archive-keyring.gpg | dd of=/usr/share/keyrings/githubcli-archive-keyring.gpg \
    && chmod go+r /usr/share/keyrings/githubcli-archive-keyring.gpg \
    && echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/githubcli-archive-keyring.gpg] https://cli.github.com/packages stable main" | tee /etc/apt/sources.list.d/github-cli.list > /dev/null \
    && apt-get install --no-install-recommends -y gh \
    && apt-get autoremove -y \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# Clone GenESyS
RUN git clone -b $GENESYS_BRANCH $GENESYS_REPO $GENESYS_ROOT

# Copy entrypoint
COPY scripts/entrypoint.sh /usr/local/bin/entrypoint.sh
RUN chmod +x /usr/local/bin/entrypoint.sh

ENTRYPOINT ["bash", "/usr/local/bin/entrypoint.sh"]