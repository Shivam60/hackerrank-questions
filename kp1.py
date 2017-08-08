t=int(input())
for i in range(t):
	a,b=input().split()
	a=int(a)
	mx=int(b)
	ls=list(input().split())
	lsf=set()
	lsf.add(0)
	for i in ls:
		lsf.add(int(i))
	lsf=sorted(list(lsf))
	mat=[[0 for i in range(mx+1)]]
	ans=set()
	for i in range(1,len(lsf)):
		rt=[]
		for w in range(1,mx+1):
			print(i,w,mat[i-1][w%lsf[i]])
			rt.append(int(w/lsf[i])*lsf[i]+mat[i-1][w%lsf[i]])
			ans.add(int(w/lsf[i])*lsf[i]+mat[i-1][w%lsf[i]])
		mat.append(rt)
	m1=0	
	while(mx>0):
		if mx in ans:
			m1=mx
			break
		else:	 
			mx-=1
	print(m1)	

