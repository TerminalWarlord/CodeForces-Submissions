n, h = map(int, input().split())
w = 0
a = input().split()
for i in range(n):
    if int(a[i])>h:
        w += 2
    else:
        w += 1
print(w, "\n")