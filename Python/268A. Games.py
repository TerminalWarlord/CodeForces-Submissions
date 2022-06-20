def main():
    n = int(input())
    d = []
    e = []
    count = 0
    for i in range(n):
        a, b = map(int, input().split())
        d.append(a)
        e.append(b)
    for i in range(n):
        for l in range(n):
            if d[i] == e[l]:
                count += 1
    print(count, "\n")
main()