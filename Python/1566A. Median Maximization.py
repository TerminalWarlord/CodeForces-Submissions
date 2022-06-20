t = int(input())
i = 0
while i<t:
    n, s = map(int, input().split())
    j = int(n/2) + 1
    j = int(s/j)
    print(j)
    i += 1