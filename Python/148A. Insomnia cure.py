def main():
    k = int(input())
    l = int(input())
    m = int(input())
    n = int(input())
    d = int(input())
    a=0
    if(k==1 or l==1 or m==1 or n==1):
        a = d
    else:
        for i in range(1, d+1):
            if (i%k!=0) and (i%l!=0) and (i%m!=0) and (i%n!=0):
                a += 1
        a = d - a
    print(a, "\n")
main()