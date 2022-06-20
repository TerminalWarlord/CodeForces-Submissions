from sys import stdin


def main():
    t = int(stdin.readline())
    while t>0:
        s = stdin.readline()
        a = {}
        sm=0
        for i in range(len(s[:-1])):
            if a.get(s[i])==None:
                a[s[i]] = 0
            # print(a.get(s[i]))
            if a[s[i]]<2:
                a[s[i]]+=1
                sm+=1
        # print(a)
        if sm&1:
            print((sm-1)//2)
        else:
            print(sm//2)
        t-=1
main()