def main():
    a = list(map(int, input().split()))
    k = 0
    for i in range(4):
        for j in range(i+1,4):
            if a[i] == a[j]:
                k += 1
                break;
    print(k, "\n")
main()