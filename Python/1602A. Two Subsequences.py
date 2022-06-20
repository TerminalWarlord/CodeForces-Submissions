def main():
    t = int(input())
    while t>0:
        s = input()
        l = list(s)
        l.sort()
        a = l[0]
        print(end=a)
        print(end=" ")
        b = []
        ans = 0
        for i in range(len(s)):
            if ans==0 and s[i]==a:
                ans+=1
                continue
            print(end=s[i])
        print(end="\n")
        t-=1
main()