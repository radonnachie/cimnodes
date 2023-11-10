FROM debian:bookworm-slim

ARG DEBIAN_FRONTEND=noninteractive

WORKDIR /work

RUN apt-get update -y && apt-get install -y \
    gcc \
    git \
    make

RUN git clone https://luajit.org/git/luajit.git && cd luajit && make && make install
RUN git clone https://github.com/cimgui/cimgui && cd cimgui && git submodule update --init --recursive
