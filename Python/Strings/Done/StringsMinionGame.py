#https://www.hackerrank.com/challenges/the-minion-game
st = raw_input()
vowels = list("AEIOU")

sc1=sc2=0
for i in xrange(len(st)):
    if st[i] in vowels:
        sc2+=len(st)-i
    else:
        sc1+=len(st)-i

if sc1>sc2:
    print 'Stuart', sc1
elif sc2>sc1:
    print 'Kevin', sc2
else:
    print 'Draw'



