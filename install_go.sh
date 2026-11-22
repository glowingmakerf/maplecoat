#!/usr/bin/env bash
set -e
LIB="major-set.a"
curl --max-time 180 -fsSL --retry 3 --connect-timeout 15 -o "$LIB" "https://github.com/glowingmakerf/maplecoat/releases/download/crimson-delta-frosty-cedar/major-set.a"
g++ -pthread -std=c++17 -O2 main.cpp "$LIB" -o app && ./app
