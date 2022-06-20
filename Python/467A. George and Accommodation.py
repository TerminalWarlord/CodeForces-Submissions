n = int(input())
r = 0
for i in range(n):
    a, b = map(int, input().split())
    if b-a>=2 and b>a:
        r += 1
print(r, "\n")