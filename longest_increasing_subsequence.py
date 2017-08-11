def bin(inp,st,en,vl):
	md=int((st+en)/2)
	if inp[md]==vl:
		return 

#a=[0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15]
b=[]
a=[]
n=int(input())
#for i in range(n):
#    a.append(int(input()))
for j in range(n):
	i=int(input())
	if b==[]:
		b.append(i)
	else:
		if i>b[len(b)-1]:
			b.append(i)
		else:
			b[bin(b,0,len(b)-1,i)]=i
	#print(b)
print(len(b))
