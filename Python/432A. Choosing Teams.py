def main():
    n, k = map(int, input().split())
    count = 0
    tmp = list(map(int, input().split()))
    for i in range(n):
        if(tmp[i]+k<=5):
            count += 1
    print(count//3)
main()