def main():
    t = int(input())
    while t>0:
        n = int(input())
        a = list(map(int, input().split()))
        a.sort()
        count = 0
        for i in range(1, n):
            if a[i]-a[i-1]>1:
                count += 1
                break
        if count == 0:
            print("YES")
        else:
            print("NO")
        t -= 1
main()