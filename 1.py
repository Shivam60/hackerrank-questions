from itertools import product
no=input()
na1=map(int, raw_input().strip().split(' '))
na2=map(int, raw_input().strip().split(' '))
fl=na1+na2

mx=max(fl)
while(mx>1):
	cnt=0
	for i in fl:
		if i%mx==0:
			cnt+=1
		if cnt==2:
			break
	if cnt==2:
		break
	else:
		mx-=1
print(max(list(filter(lambda x:(x%mx==0),na1)))+max(list(filter(lambda x:(x%mx==0),na2))))
#an=list(product(list(filter(lambda x:(x%mx==0),na1)),list(filter(lambda x:(x%mx==0),na2))))
#print(max(list(map(sum,an))))

