#!/bin/bash

if cmp -s out_sequential.txt out_parallel.txt; then
    echo "***************************************** FAILED *****************************************"
    exit 1
else
    echo "***************************************** PASSED *****************************************"
fi