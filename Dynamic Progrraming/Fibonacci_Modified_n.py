d={0:0,1:1}    
def fib(n):
    if n in d:
        return d[n]
    else:
        d[n]=fib(n-1)+fib(n-2)
        return d[n]
n=int(input())
print(fib(n))
print(d)