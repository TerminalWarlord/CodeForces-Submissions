def main():
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    for i in range(n):
        print(end=str(a[i]))
        if(i!=n-1):
            print(end=" ")
main()