def bin(inp,st,en,vl):
	md=int((st+en)/2)
	if inp[md]==vl:
		return md
	elif inp[md]>vl and inp[md-1]<vl:
		return md-1
	elif inp[md]<vl and inp[md+1]>vl:
		return md
	elif inp[md]>vl:
		en=md
		bin(inp,st,en,vl)
	else:
		st=md
		bin(inp,st,en,vl)

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
