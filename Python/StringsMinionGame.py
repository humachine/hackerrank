#https://www.hackerrank.com/challenges/the-minion-game
st = raw_input()
vowels = list("AEIOU")
cons=0
score1=score2=0
sub1=[]
sub2=[]

for i in xrange(len(st)):
    if st[i] in vowels:
        sub1.append(st[i])
        sub1.extend([st[i:j] for j in xrange(i+1, len(st)+1)])
    else:
        sub2.append(st[i])
        sub2.extend([st[i:j] for j in xrange(i+1, len(st)+1)])
sub1 = list(set(sub1))       
sub2 = list(set(sub2))       

def subcount(st, sub):
    count=start=0
    while True:
        start= st.find(sub, start)+1
        if start>0:
            count+=1
        else:
            return count
        

sc1 = [subcount(st, i) for i in sub1]
sc2 = [subcount(st, i) for i in sub2]
sc1=sum(sc1)
sc2=sum(sc2)
sc1, sc2=sc2, sc1

if sc1==sc2:
    print "DRAW"
elif sc1>sc2:
    print "STUART", sc1
else:
    print "KEVIN", sc2
