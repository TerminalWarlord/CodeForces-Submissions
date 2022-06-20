def main():
    a = list(input())
    b = list(input())
    c = []
    d = []
    for i in range(len(a)):
        if a.count(a[i])!=b.count(b[i]) or a.count(b[i])!=b.count(a[i]):
            print(-1)
            return 0
    count2 = 0
    count = 1
    for i in range(len(a)):
        if a[i]!=b[i]:
            count += 1
            if c.count(a[i])==0 and c.count(b[i])==0:
                c.append(a[i])
                c.append(b[i])
                b[i] = a[i]
            if c.count(a[i])==0 or c.count(b[i])==0:
                print(-1)
                return 0
            if d.count(a[i])!=0 or d.count(b[i])!=0:
                print(-1)
                return 0
        else:
            if c.count(a[i])!=0 or c.count(b[i])!=0:
                print(-1)
                return 0
            else:
                count2 += 1
                d.append(a[i])
    if count2==len(a):
        print(0)
    elif len(a)==count:
        print(-1)
    else:
        n = len(c)//2
        print(n)
        j = 1
        while j<len(c):
            print(f"{c[j-1]} {c[j]}")
            j+=2
main()