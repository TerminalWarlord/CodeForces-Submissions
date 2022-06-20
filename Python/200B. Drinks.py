def main():
    n = int(input())
    sum = 0
    a = list(map(int, input().split()))
    for i in range(n):
        a[i] = a[i]/100
        sum  = sum + a[i]
    sum = (sum/n)*100
    print('%.12f'%sum, "\n")
main()