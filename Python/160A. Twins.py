def main():
    n = int(input())
    a = list(map(int, input().split()))
    sum1 =0
    for i in range(n):
        sum1 += a[i]
    sum1 //= 2
    sum2, count = 0, 0
    a.sort(reverse=True)
    for i in range(n):
        sum2 += a[i]
        count += 1
        if(sum2>sum1):
            break
    print(count)
main()