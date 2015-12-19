T=int(raw_input())
for _ in xrange(T):
    ans=0
    a = raw_input()
    l = len(a)
    for i in xrange(l/2):
        if a[i] == a[l-1-i]:
            continue
        ans+= abs(ord(a[i])-ord(a[l-1-i]))
    print ans

