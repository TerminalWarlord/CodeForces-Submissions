def solve(t):
    while t>0:
        h, n, m = map(int, input().split())
        tmp = h
        for i in range(n):
            if (h//2)+10>tmp:
                break
            h = h//2+10
        if h <= 10*m:
            print("YES")
        else:
            print("NO")
        t -= 1
def main():
    t = int(input())
    solve(t)
main()