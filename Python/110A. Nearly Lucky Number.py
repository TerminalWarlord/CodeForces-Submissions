n = input()
d = 0
i = 0
while i<len(n):
    if n[i] == '4' or n[i] == '7':
        d += 1
    i += 1
if d == 4 or d == 7:
    print("YES")
else:
    print("NO")