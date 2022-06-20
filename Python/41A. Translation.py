s =  input()
t = input()
y = 0
for i in range(len(s)):
    if len(s) != len(t):
        break
    if s[i] == t[len(s)-1-i]:
        y += 1
if y == len(s):
    print("YES")
else:
    print("NO")