def main():
	t = int(input())
	while t>0:
		n, l, r, k = map(int, input().split())
		a = list(map(int, input().split()))
		a.sort()
		count =0
# 		sum = 0
		for i in range(len(a)):
			if a[i]>=l and a[i]<=r and a[i]<=k:
				count+=1
				# sum += a[i]
				k -= a[i]
# 			if sum>=k:
# 				break
			
		print(count)		
		t-=1
main()