n = int(input())
i, rem, mp = 0, 0, 0
while i<n:
    a, b = map(int, input().split())
    rem = rem - a + b
    if mp<=rem:
        mp = rem
    i += 1
print(mp)