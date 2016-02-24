inp = raw_input()
n, e, v, c = inp.split()
n=int(n)
e=int(e)
v=int(v)
c=int(c)
affected = raw_input().split()
affected = [int(i) for i in affected]

l=[]
for i in range(n+1):
    l.append([])

for i in range(e):
    u, v = raw_input().split()
    u=int(u)
    v=int(v)

    l[u].append(v)
    l[v].append(u)

#print l

S = [c]
cnt=0
done=0
discovered=[0]*(n+1)
discovered[c]=1
ans=0
newnodes=S
while S:
    if sum(discovered) == n:
        print 'Virus can\'t reach me'
        exit()
    cnt+=1
    newnodes1=[]
    for i in newnodes:
        for j in l[i]:
            #print j, i, cnt
            if j in affected:
                done=1
                break
            if not discovered[j]:
                newnodes1.append(j)
        if done:
            print cnt
            exit()
            break

    if len(newnodes) == 0:
        print 'Virus can\'t reach me'
        exit()
    newnodes=newnodes1



print cnt
