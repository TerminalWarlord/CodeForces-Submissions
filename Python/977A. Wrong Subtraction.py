n, k = map(int, input().split())
i = 0
while i<k:
    if n%10==0:
        n = n/10
    else:
        n -= 1
    i += 1
print(int(n))