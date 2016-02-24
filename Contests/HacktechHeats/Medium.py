a=raw_input()
b=raw_input().split()


def gcd(x, y):
    while y != 0:
        (x, y) = (y, x % y)
    return x

def fn(no):
    return (4*no)/ gcd(4*no, no+1)


for i in b:
    print fn(int(i))+1
