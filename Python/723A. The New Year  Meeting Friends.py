def main():
    a = list(map(int, input().split()))
    a.sort()
    diff = 0
    i = 2
    while i>0:
        diff += a[i] - a[i-1]
        i -= 1
    print(diff, "\n")
main()