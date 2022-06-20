def main():
    n,m,a = map(int, input().split())
    p = int(n/a)
    q = int(m/a)
    if n%a!=0:
        p += 1
    if m%a!=0:
        q += 1
    print(p*q, "\n")
main()