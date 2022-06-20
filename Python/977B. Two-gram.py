def main():
    n = int(input())
    s = input()
    d = {}
    i=0
    while i<n:
        if s[i:i+2] in d:
            d[s[i:i+2]]=d[s[i:i+2]]+1
        else:
            d[s[i:i+2]]=1 
        i+=2
    i=1
    while i<n:
        if s[i:i+2] in d:
            d[s[i:i+2]]=d[s[i:i+2]]+1
        else:
            d[s[i:i+2]]=1 
        i+=2
    
    lv = s[-1]
    dict1 = sorted(d.items(), key=lambda item:item[1:])
    l = [dict1[-1][0]]
    for i in reversed(range(len(dict1))):
        if dict1[i][1]==dict1[i-1][1]:
            l.append(dict1[i][0])
        else:
            break
    print(l[-1])
main()