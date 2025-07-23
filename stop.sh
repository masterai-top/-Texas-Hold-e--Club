#!/bin/bash
#ps -ef|grep -v grep|grep RouterServer|while read u p o
ps -C RouterServer --no-header|while read p d t n
do
kill -9 $p
done
