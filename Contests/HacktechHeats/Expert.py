cars, miles = map(int, raw_input().split())
speeds = []
for i in range(cars):
    xx = map(int, raw_input().split())
    xx = xx[1:]
    xx.append(0)
    xx.append(3333333)
    speeds.append(xx)

print speeds

def argsort(seq):
    return sorted(range(len(seq)), key=seq.__getitem__)

oldposition=range(cars)
olddist = [0]*cars
dist=[0]*cars
currspeed=[0]*cars
ctr=0

def overtakes(newpos, oldposition):
    ans=0
    for i in xrange(cars):
        if oldposition.index(newpos[i]) > i:
            ans = oldposition.index(newpos[i]) - i
    return ans

for hrs in xrange(miles):
    newdist = [dist[i]+speeds[i][currspeed[i]] for i in xrange(cars)]
    dist = newdist
    dellist=[]
    for i in xrange(cars):
        speeds[i][currspeed[i]+1]-=1
        if speeds[i][currspeed[i]+1]==0:
            currspeed[i]+=2
    newpos = argsort(dist)
    ctr+=overtakes(newpos, oldposition)
