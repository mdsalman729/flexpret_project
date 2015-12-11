#!/bin/bash
i=0
while [ $i -le 1000000 ]
do
  make run
  i=$((i+1))
done
