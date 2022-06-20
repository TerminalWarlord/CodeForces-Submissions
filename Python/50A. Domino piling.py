M, N = input().split()
M = int(M)
N = int(N)
if (M*N)%2!=0:
	i = (M*N-1)/2
else:
	i = (M*N)/2
print(round(i))