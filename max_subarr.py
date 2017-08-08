a=list(input().strip().split())
a=[int(i) for i in a]
maxsof=0
maxend=0
maxtot=0
for i in range(len(a)):
    maxsof+=a[i]
    if maxsof<0:
        maxsof=0
    if maxend<maxsof:
        maxend=maxsof
    if a[i]>=0:
        maxtot+=a[i]
print(maxend,maxtot)