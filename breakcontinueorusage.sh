#!/bin/bash
#use of break statement to break through the loop
for ((  i=1;  i<10;  i++  ))
do
if [ $i -ge 4 ]
then
break
fi
echo $i
done
#use of continue statement to SKIP that particular step
for ((  i=1;  i<10;  i++  ))
do
if [ $i -eq 4 ]
then
continue
fi
echo $i
done
#use of 'or' in if condition
for ((  i=1;  i<10;  i++  ))
do
if [ $i -eq 4 -o $i -eq 6 ]
then
continue
fi
echo $i
done
