def fib(i):
    if i<len(d):
        return d[i]
    else:
        d.append(fib(i-2)+fib(i-1)*fib(i-1))
        return d[i]
ls=input().strip().split()
ls=[int(i) for i in ls]
print(ls)
d=[ls[0],ls[1]]
print(fib(ls[2]-1))