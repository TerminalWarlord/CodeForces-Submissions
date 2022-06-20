def isPrime(n):
    if n<=1:
        return False
    if n<=3:
        return True
    if n%2==0 or n%3==0:
        return False
    i = 5
    while i*i<=n:
        if n%i==0 or n%(i+2)==0:
            return False
        i += 6
    return True

def main():
    n = int(input())
    x = n//2
    y = n//2
    if n&1:
        y = n//2 + 1
    while True:
        if isPrime(x)==True or isPrime(y)==True:
            x -= 1
            y += 1
        else:
            if x+y==n:
                break
    print(x, y)
main()