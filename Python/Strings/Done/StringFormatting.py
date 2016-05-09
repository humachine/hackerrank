#https://www.hackerrank.com/challenges/python-string-formatting

N = int(raw_input())
colWidth=len(str(bin(N)))-2
for i in range(1,N+1):
    print '%s' % str(i).rjust(colWidth), 
    print '%s' % str(oct(i))[1:].rjust(colWidth),
    print '%s' % str(hex(i))[2:].upper().rjust(colWidth),
    print '%s' % str(bin(i))[2:].rjust(colWidth)
    #str(hex(i))[1:].rjust[colWidth], str(bin(i))[1:].rjust[colWidth]
