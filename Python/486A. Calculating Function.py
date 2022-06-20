def main(n):
    if n&1:
        sum = (n+1)/2 * (-1)
    else:
        sum = n/2
    print(round(sum), "\n")
main(n = int(input()))