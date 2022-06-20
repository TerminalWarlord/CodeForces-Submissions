s =  list(input())
i, cl, sl = 0, 0, 0
while i<len(s):
    if s[i].isupper() or (s[i].islower() and len(s) == 1):
        cl += 1
    if (s[i].islower() and i>0) or (s[i].isupper() and len(s) == 1):
        sl += 1
    i += 1
i = 0
while i<len(s):
    if sl > 0 and sl != len(s):
        pass
    elif cl == len(s) and len(s)>1:
        s[i] = s[i].lower()
    elif cl>0 and sl == 0:
        if s[i].islower() and i == 0:
            s[i] = s[i].upper()
        elif s[i].isupper() and i>0:
            s[i] = s[i].lower()
        else:
            pass
    else:
        s[i] = s[i].lower()
    i += 1
print("".join(s))