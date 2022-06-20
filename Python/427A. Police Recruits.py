def main():
    n = int(input())
    a = list(map(int, input().split()))
    count = 0
    for i in range(n):
        if i==0:
            if a[i] == -1:
                count += 1
        elif a[i] ==-1 and i>0:
            if a[i-1]>0:
                a[i] = a[i-1] - 1
            else:
                count += 1
        elif a[i]>0:
            if a[i-1]>0 and a[i]:
                a[i] = a[i-1] + a[i]
    print(count)
main()