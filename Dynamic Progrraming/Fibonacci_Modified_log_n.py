d={0:0,1:1}    
def fib(n):
    if n in d:
        return d[n]
    else:
        if n%2==0:
            k=n/2
            d[n]=(2*fib(k-1)+fib(k))*fib(k)
        else:
            k=(n+1)/2
            d[n]=fib(k)*fib(k)+fib(k-1)*fib(k-1)
        return d[n]
n=int(input())
print(fib(n))
print(d)
