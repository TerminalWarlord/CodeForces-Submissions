s = input()
l = 0
for a in range(len(s)):
    for b in range(a+1, len(s)):
        if s[a] == s[b]:
            l += 1
            break;
l = len(s) - l
if l%2 ==0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")