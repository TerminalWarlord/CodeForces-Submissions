def main():
    t = int(input())
    while t>0:
        n = int(input())
        a = list(map(int, input().split()))
        # print(sum(a))
        # maxv=max(a.count(1),a.count(0))
        # minv=min(a.count(1),a.count(0))
        print((2**a.count(0))*a.count(1))
        t-=1
main()