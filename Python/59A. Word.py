s =  input()
l = len(s)
i, ca, sm = 0, 0, 0
while i<l:
    if ord(s[i])<96:
        ca += 1
        
    else:
        sm += 1
    i += 1
final = []
if sm<ca:
    i = 0
    while i<l:
        if ord(s[i])>92:
            p = ord(s[i]) - 32
        
        else:
            p = ord(s[i])
        final.append(chr(p))
        i += 1
else:
    i = 0
    while i<l:
        if ord(s[i])<92:
            p = ord(s[i]) + 32
        
        else:
            p = ord(s[i])
        final.append(chr(p))
        i += 1
print("".join(final))