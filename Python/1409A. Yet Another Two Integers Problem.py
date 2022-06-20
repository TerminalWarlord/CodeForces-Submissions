def main():
    t = int(input())
    while t>0:
        a, b = map(int, input().split())
        if a>b:
            if (a-b)%10!=0:
                c = (a-b)//10 + 1
            else:
                c = (a-b)//10
        elif b>a:
            if (b-a)%10!=0:
                c = (b-a)//10 + 1
            else:
                c = (b-a)//10
        else:
            c = 0
        print(c)
        t -= 1
main()