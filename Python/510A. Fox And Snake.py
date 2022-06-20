def main():
    n, m = map(int, input().split())
    l = 0
    for i in range(n):
        if i&1:
            if l&1:
                print(end="#")
                for j in range(m-1):
                    print(end=".")
                print(end="\n")
            else:
                for j in range(m-1):
                    print(end=".")
                print(end="#\n")
            l += 1
        else:
            for i in range(m):
                print(end="#")
            print(end="\n")
main()