def main():
    a, b = map(int, input().split())
    if a>=b:
        dif = b
        same = (a-b)/2
    else:
        dif = a
        same = (b-a)/2
    print(dif, int(same))
main()