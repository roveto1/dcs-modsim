FROM ubuntu:24.04
#           ^^^ Might need change

ARG VERSION=0.1.0
ARG GENESYS_REPO=https://github.com/rlcancian/Genesys-Simulator

ENV REMOTE=0
ENV GENESYS_BRANCH=master
ENV GENESYS_ROOT=/home/genesys/remote
ENV GENESYS_PROJECT_SUBPATH=source/applications/gui/qt/GenesysQtGUI/GenesysQtGUI.pro
ENV GENESYS_GUI_SUBPATH=source/applications/gui/qt/GenesysQtGUI/build-GenesysQtGUI-Desktop-Debug
ENV GENESYS_NOGUI_SUBPATH=GenesysShell

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
        # libgl1 \
        # mesa-utils \
        mesa-vulkan-drivers \
        # xdg-utils \
        qtcreator \
        qt6-base-dev \
        qt6-tools-dev \
        qt6-tools-dev-tools \
        # libqt5opengl5 \
        # libqt5opengl5-dev \
        libqt6opengl6-dev \
        libqt5gui5 \
        libqt5core5a \
        libqt5widgets5 \
        # libglib2.0-0 \
        libxcb1 \
        libx11-6 \
        libx11-xcb1 \
        libxext6 \
        libxrender1 \
        libxkbcommon0 \
        libxcb-render0 \
        libxcb-shape0 \
        libxcb-xfixes0 \
        # software-properties-common \
    && curl -fsSL https://cli.github.com/packages/githubcli-archive-keyring.gpg | dd of=/usr/share/keyrings/githubcli-archive-keyring.gpg \
    && chmod go+r /usr/share/keyrings/githubcli-archive-keyring.gpg \
    && echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/githubcli-archive-keyring.gpg] https://cli.github.com/packages stable main" | tee /etc/apt/sources.list.d/github-cli.list > /dev/null \
    && apt-get install --no-install-recommends -y gh \
    && apt-get autoremove -y \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# RUN wget http://ftp.gnu.org/gnu/gcc/gcc-12.3.0/gcc-12.3.0.tar.gz && \
#     tar -xvzf gcc-12.3.0.tar.gz && \
#     cd gcc-12.3.0 && ./contrib/download_prerequisites && \
#     mkdir build && cd build && \
#     ../configure --disable-multilib --enable-languages=c,c++ --prefix=/opt/gcc-12.3.0 && \
#     make -j$(nproc) && make install && \
#     cd / && rm -rf gcc-12.3.0 gcc-12.3.0.tar.gz

# ENV LD_LIBRARY_PATH=/opt/gcc-12.3.0/lib64:$LD_LIBRARY_PATH

# Clone GenESyS
RUN git clone $GENESYS_REPO $GENESYS_ROOT

# Copy entrypoint
COPY scripts/entrypoint.sh /usr/local/bin/entrypoint.sh
RUN chmod +x /usr/local/bin/entrypoint.sh

ENTRYPOINT ["bash", "/usr/local/bin/entrypoint.sh"]