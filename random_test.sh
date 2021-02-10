#!/bin/bash

RANDOM=$$
FILE="test.txt"

echo > $FILE
for count in `seq 50`
do
    echo $((RANDOM%100)) >> $FILE

done
