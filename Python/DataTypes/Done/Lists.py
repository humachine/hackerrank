#https://www.hackerrank.com/challenges/python-lists
L=[]
N=int(raw_input())
for i in xrange(N):
    inp = raw_input().split()
    if len(inp)>1:
        if inp[0]=="append":
            L.append(int(inp[1]))
        elif inp[0]=="remove":
            L.remove(int(inp[1]))
        elif inp[0]=="insert":
            L.insert(int(inp[1]), int(inp[2]))
    else:
        inp=inp[0]
        if inp=="print":
            print L
        elif inp=="sort":
            L.sort()
        elif inp=="pop":
            L.pop()
        elif inp=="reverse":
            L.reverse()
