def main():
    n, k = map(int, input().split())
    k = 240 - k
    s, a = 0, 0
    for i in range(1, n+1):
        if s + (i*5)<=k:
            s += i*5
            a += 1
        else:
            break
    print(a)
main()