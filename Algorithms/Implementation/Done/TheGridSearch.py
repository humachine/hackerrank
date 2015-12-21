#https://www.hackerrank.com/challenges/the-grid-search

T = int(raw_input())
for _ in xrange(T):
    Grid=[]
    pattern=[]
    R, C = raw_input().split()
    R, C = int(R), int(C)
    for __ in xrange(R):
        Grid.append(raw_input())

    r, c = raw_input().split()
    r, c = int(r), int(c)
    for __ in xrange(r):
        pattern.append(raw_input())

    s=pattern[0]
    ptrn = 0
    prevloc = -1
    found = False
    for i in Grid:
        loc=i.find(pattern[ptrn])

        if loc<0:
            continue

        if ptrn==0:
            prevloc=loc
            ptrn+=1
        else:
            if loc!=prevloc:
                ptrn=0
                prevloc=-1
            else:
                ptrn+=1
                if ptrn==len(pattern):
                    found = True
                    print "YES"
                    break
    if not found:
        print "NO"


