def main():
    t = int(input())
    for k in range(t):
        n = int(input())
        for l in range(1,n+1):
            for i in range(1, l+1):
                print(end="(")
            for i in range(1, n-l+1):
                print(end=")(")
            for i in range(1, l+1):
                print(end=")")
            print(end="\n")
main()