#!/usr/bin/env bash

Xephyr -br -ac -reset -screen 1920:1080 :1 &
sleep 1s
export DISPLAY=:1
./dwm &
