# import io, os, sys
# input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline

def main():
    t = int(input())
    while t>0:
        s = list(input())
        p = list(input())
        sum=0
        for i in range(1, len(p)):
            sum+=abs(s.index(p[i])-s.index(p[i-1]))
        print(sum)
        t-=1
main()