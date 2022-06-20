def main():
    t = int(input())
    while t>0:
        n = int(input())
        a = list(input())
        b = list(input())
        count = False
        for i in range(n):
            if a[i]=='1' and b[i]=='1':
                count = True
        if count:
            print("NO")
        else:
            print("YES")
        t -= 1
main()