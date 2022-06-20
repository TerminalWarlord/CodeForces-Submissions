t = int(input())
for _ in range(t):
	n, m = map(int, input().split())
	if m%n!=0:
		print(0,0)
	else:
		print(1, m//n)