for i in range(int(input())):
	t,sm=input().split()
	t=int(t)
	sm=int(sm)
	ls=[]
	t1=input().split()
	for i in range(t):
		ls.append(int(t1[i]))
	mat=[]
	for i in range(len(ls)):
		rw=[]
		r1=list(range(sm+1))
		for j in range(len(r1)):
#			print(i,j)
			if 0==j:
				rw.append(0)
			elif ls[i]>r1[j]:
				rw.append(mat[i-1][j])
			else:			
				ans=r1[j]%ls[i]
				if ans==0:
					rw.append(r1[j])
				else:
					rw.append(mat[i-1][r1[j]%ls[i]]+int(r1[j]/ls[i])*ls[i])
		mat.append(rw)
	for i in mat:
		print(i)			
	
	
