FROM python:3.10-slim

# Install required packages including `ps` (from procps)
RUN apt-get update && \
    apt-get install -y python3-tk x11vnc xvfb fluxbox wget net-tools procps && \
    apt-get clean && rm -rf /var/lib/apt/lists/*

# Install noVNC
RUN mkdir -p /opt/novnc/utils/websockify && \
    wget https://github.com/novnc/noVNC/archive/refs/tags/v1.4.0.tar.gz -O - | tar -xz --strip-components=1 -C /opt/novnc && \
    wget https://github.com/novnc/websockify/archive/refs/tags/v0.10.0.tar.gz -O - | tar -xz --strip-components=1 -C /opt/novnc/utils/websockify

# Set working directory and copy files
WORKDIR /app
COPY main.py .
COPY entrypoint.sh /entrypoint.sh
RUN chmod +x /entrypoint.sh

# Run the app
CMD ["/entrypoint.sh"]
