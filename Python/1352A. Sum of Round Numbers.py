def main():
    t = int(input())
    while t>0:
        a = int(input())
        b = []
        count = 0
        while a>0:
            c = a%10
            a = a//10
            if c!=0:
                count += 1
            b.append(c)
        print(count)
        l = len(b) -1 
        while l>=0:
            tmp = b[l]
            if tmp != 0:
                for lol in range(0, l):
                    tmp *= 10
                print(end=f"{tmp} ")
            l -= 1
        print(end="\n")
        t -= 1
main()