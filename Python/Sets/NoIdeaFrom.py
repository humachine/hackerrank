#https://www.hackerrank.com/challenges/no-idea/copy-from/16000349

import sys

n, m = map(int, raw_input().split())
arr1 = (map(int, raw_input().split()))
arr = set(arr1)
a = map(int, raw_input().split())
b = map(int, raw_input().split())

in1 = arr.intersection(a)
in2 = arr.intersection(b)

print len(in1), len(in2)

sc1=0
for i in in1:
    sc1+=arr1.count(i)

for i in in2:
    sc1-=arr1.count(i)

print sc1
