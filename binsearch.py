def bin(inp,st,en,vl):
	md=int((st+en)/2)
	#print(st,en,md)
	if inp[md]==vl:
		return md
	elif inp[md]>vl and inp[md-1]<vl:
		return md
	elif inp[md]<vl and inp[md+1]>vl:
		return md+1
	elif inp[md]>vl and md==0:
		return md
	else:
		if(inp[md]<vl):
			st=md
			return bin(inp,st,en,vl)
		else:
			en=md
			return bin(inp,st,en,vl)
inp=[0,4,12]
vl=2
inp[bin(inp,0,len(inp)-1,vl)]=vl
print(inp)
