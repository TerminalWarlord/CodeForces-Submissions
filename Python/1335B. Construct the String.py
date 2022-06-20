def main():
    t = int(input())
    while t>0:
        n, a, b= map(int, input().split())
        l = []
        s = []
        for i in range(n):
            l.append(chr(97+i%b))
        
        print("".join(l))    
        t-=1
main()