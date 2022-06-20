def main():
    k, r = map(int, input().split())
    if r%k == 0:
        i = r//k;
    else:
        i = 1
        while True:
            if k*i%10==0 or k*i%10==r:
                break
            i += 1
    print(i)
main()