def main():
    t =  int(input())
    for _ in range(0, t):
        x1,p1 = map(int, input().split())
        x2,p2 = map(int, input().split())
        a = min(p1, p2)
        p1 -= a
        p2 -= a
        if p1>=7:
            print(">")
        elif p2>=7:
            print("<")
        else:
            for i in range(0, p1):
                x1*=10
            for i in range(0, p2):
                x2*=10
            if x1<x2: 
                print("<") 
            elif x1>x2: 
                print(">") 
            else: 
                print("=")
main()