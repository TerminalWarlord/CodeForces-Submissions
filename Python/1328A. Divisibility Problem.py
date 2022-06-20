def main():
    t = int(input())
    for i in range(t):
        a, b = map(int, input().split())
        c = 0
        if a%b!=0:
            c = b - (a%b)
        print(c)
main()