def main():
    n,m = map(int, input().split())
    flag = min(n, m)
    if flag&1:
        print("Akshat\n")
    else:
        print("Malvika\n")
main()