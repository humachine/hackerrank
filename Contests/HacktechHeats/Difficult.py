N = int(raw_input())

def fn(l, xx):
    a, b, c =xx
    dic=[0]*5000
    for i in xrange(0, xx[0]):
        dic[i]=-100000000000000
    dic[0]=0
    dic[xx[0]]=1
    for i in xrange(xx[0]+1, l+1):
        if c<i:
            ans = 1+max(dic[i-c], dic[i-b], dic[i-a])
            dic[i]=ans
        elif b<i:
            ans = 1+max(dic[i-b], dic[i-a])
            dic[i]=ans
        else:
            ans=1+dic[i-a]
            dic[i]=ans

    return dic[l]



for i in range(N):
    xx =map(int, raw_input().split())
    l = xx[0]
    xx = xx[1:]
    xx = sorted(xx)
    print max(fn(l, xx), 1)

