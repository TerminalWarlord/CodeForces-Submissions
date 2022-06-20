def main():
    n = int(input())
    a = [1, 5, 10, 20, 100]
    den = 0
    for i in range(len(a)-1, 0, -1):
        den += round(n/a[i])
        n = n%a[i]
    den += n
    print(int(den))
main()