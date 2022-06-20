def main():
    abc = list(map(int, input().split()))
    abc.sort()
    a = (abc[1]+abc[2]-abc[0])//2
    b = abc[1]-a
    c = abc[2]-a
    print(f"{a} {b} {c}")
    
main()