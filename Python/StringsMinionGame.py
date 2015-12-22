#https://www.hackerrank.com/challenges/the-minion-game
st = raw_input()
vowels = list("AEIOU")
cons=0
score1=score2=0
sub1=[]
sub2=[]

for i in xrange(len(st)):
    if st[i] in vowels:
        sub2.append(i) 
    else:
        sub1.append(i)

print 'Done'

done={}
print st
def subcount(i, j):
    sub=st[i:j]
    if sub in done:
        print 'hit'
        return done[sub]
    count=start=0
    while True:
        res=st[start:].find(sub)
        if res>0:
            start=res+1+start
            count+=1
        else:
            done[sub]=count
            return count
'''
for i in xrange(len(st)):
    for j in xrange(i+1, len(st)+1):
        print i, j
        if st[i:j] not in done:
            if j-i+1 > len(st)/2:
                done[st[i:j]]=1
                continue
            subcount(i, j)
'''
print 'Done1'
                

        
sc1=0
for i in sub1:
    for j in xrange(i+1, len(st)+1):
        if st[i:j] not in done:
            if j-i+1 > len(st)/2:
                done[st[i:j]]=1
                continue
            sc1+=subcount(i, j)

print 'Done1'
sc2=0
for i in sub2:
    for j in xrange(i+1, len(st)+1):
        if st[i:j] not in done:
            sc2+=subcount(st, st[i:j])



if sc1==sc2:
    print "Draw"
elif sc1>sc2:
    print "Stuart", sc1
else:
    print "Kevin", sc2
