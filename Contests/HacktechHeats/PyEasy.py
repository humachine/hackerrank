a=raw_input().split()
n = int(a[0])
m = int(a[1])
s = int(a[2])
x = int(a[3])
y = int(a[4])
z = int(a[5])

if s%n==0:
    comps=s/n
else:
    comps=(s/n)+1
cost = x+y+z;
if m<cost:
    print m
else:
    if m > cost*comps:
        print (m-cost*comps)
    else:
        print m%cost
    
