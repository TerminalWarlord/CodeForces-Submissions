def main():
    n = int(input())
    a = []
    b = list(map(int, input().split()))
    for i in range(n):
        if i<1:
            a.append(b[i])
        else:
            if b[i]>a[-1]:
                a.insert(-1, b[i])
            elif b[i]<a[0]:
                a.insert(0, b[i])
        a.sort()
    print(len(a)-1)
main()