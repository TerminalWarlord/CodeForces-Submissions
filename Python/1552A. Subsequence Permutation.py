def main():
    t = int(input())
    for i in range(t):
        n = int(input())
        x = list(input())
        y = []
        count = 0
        for j in range(n):
            y.append(x[j])
        y.sort()
        for j in range(n):
            if x[j] != y[j]:
                count += 1
        print(count)
main()