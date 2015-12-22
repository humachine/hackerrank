#https://www.hackerrank.com/challenges/sets

M=int(raw_input())
li1=map(int, raw_input().split())
N=int(raw_input())
li2=map(int, raw_input().split())

li1=set(li1)
li2=set(li2)
li3= (li1.union(li2)).difference(li1.intersection(li2))
li3=list(li3)
li3.sort()
for i in li3:
    print i
