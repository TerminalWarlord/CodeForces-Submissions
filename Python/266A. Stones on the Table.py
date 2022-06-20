n = int(input())
i, l = 0, 0
a = input()
for b in range(0, len(a)):
    if a[b] == a[b-1] and b>0:
            l += 1
print(l)