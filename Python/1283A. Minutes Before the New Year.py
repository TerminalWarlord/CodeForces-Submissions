def main():
	t = int(input())
	while t>0:
		n, l = map(int, input().split())
# 		a = list(map(int, input().split()))
# 		a.sort()
# 		count =0
		print(1440-60*n-l)	
		t-=1
main()