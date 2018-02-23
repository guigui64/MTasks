#! /bin/sh

make clean
bear make

rdm &
rc -j compile_commands.json

