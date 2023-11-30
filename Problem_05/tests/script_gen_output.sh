#!/bin/bash

echo starting compilation...
g++ ../AC_solution.cpp -O3 -o sol
echo compilation finished.

for filename in ./*.in; do
    ./sol < $filename >"${filename%.in}.ans"
done