t = int(input())
for _ in range(t):
	s = input()
	t = input()
	count = 0
	for i in t:
		if i=='a':
			count+=1
	if count>=1 and len(t)>1:
		print(-1)
	elif(len(t)==1 and count==1):
		print(1)
	else:
		ans = 2**len(s)
		print(ans)