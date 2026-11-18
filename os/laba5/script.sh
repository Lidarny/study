#!/bin/bash

mkdir -p "$USER"
name="$(basename "$BASH")"
mkdir -p "./$name"

printf "Первое число: "
read -r first_value

printf "Второе число: "
read -r second_value

first_value=${first_value:-20}
second_value=${second_value:-30}

sum=$(( first_value + second_value ))
touch $sum

cp -- "./$sum" "./$name/"
chmod 604 "./$name/$sum"
