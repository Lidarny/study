#!/bin/bash

rm -df "$USER"

name="$(basename "$BASH")"
rm -rf -- "./$name"

rm -f ./[0-9]*
