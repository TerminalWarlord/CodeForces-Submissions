def main():
    n = int(input())
    f = 0
    for i in range(n):
        s = list(input())
        if s[0]=='T':
            f += 4
        elif s[0]=='C':
            f += 6
        elif s[0]=='O':
            f += 8
        elif s[0]=='D':
            f += 12
        else:
            f += 20
    print(f, "\n")
main()