#https://www.hackerrank.com/challenges/game-of-thrones

inp = raw_input()
ar=[0]*26
for i in inp:
    ar[ord(i)-97]+=1

ans=True
if(len(inp)%2 == 0):
    for j in ar:
        if j%2 != 0:
            ans=False
            break
else:
    cnt=0
    for j in ar:
        if j%2 != 0:
            cnt+=1
            if cnt==2:
                ans=False
                break

if ans == True:
    print "YES"
else:
    print "NO"

