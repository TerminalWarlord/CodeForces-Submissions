n = int(input())
p = []
g = []
a = list(input().split())
for i in range(n):
    p.append(int(a[i]))
for i in range(1, n+1):
    for j in range(n):
        if i == p[j]:
            g.append(str(j+1))
print(" ".join(g))