def main():
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()
    dif = abs(a[0]-a[n-1])
    for i in range(1, m-n+1):
        if abs(a[i]-a[n+i-1])<dif:
            dif = abs(a[i]-a[n+i-1])
    print(dif)
main()