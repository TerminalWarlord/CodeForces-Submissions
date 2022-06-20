def main():
    n = int(input())
    b = 0
    a = list(map(int, input().split()))
    c = []
    for i in range(n):
        c.append(a[i])
    a.sort()
    i = 0
    while i<n:
        if c[i] == a[n-1]:
            c.insert(0, c[i])
            c.pop(i+1)
            break
        else:
            b += 1
        i += 1
    i = n-1
    while i>=0:
        if c[i]==a[0]:
            break
        else:
            b += 1
        i -= 1
    print(b, "\n")
main()