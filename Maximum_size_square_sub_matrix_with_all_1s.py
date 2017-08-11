mat=[[0,0,0,0,0,0],[0,0,1,1,0,1],[0,1,1,0,1,0],[0,0,1,1,1,0],[0,1,1,1,1,0],[0,1,1,1,1,1],[0,0,0,0,0,0]]
mx=0
for i in range(1,len(mat)):
	for j in range(1,len(mat[i])):
		if mat[i][j]==0:
			pass
		else:
			a=min(mat[i][j-1],mat[i-1][j-1],mat[i-1][j])+1
			mat[i][j]=a
			if mx<a:
				mx=a
print(mx)
