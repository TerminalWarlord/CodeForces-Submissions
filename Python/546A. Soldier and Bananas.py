k, n, w = input().split()
i = 1
tc = 0
while i<=int(w):
    tc = tc + i*int(k);
    i += 1
if int(tc)>int(n):
    print(int(tc)-int(n))
else:
    print(0)