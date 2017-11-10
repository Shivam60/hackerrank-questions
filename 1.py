def bin(inp,st,en,vl):
	md=int((st+en)/2)
	print(md)
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
