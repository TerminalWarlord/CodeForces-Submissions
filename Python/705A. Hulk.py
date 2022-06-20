def main():
    n = int(input())
    for i in range(1, n+1):
        if i&1:
            print(end = "I hate ")
        else:
           print(end = "I love ")
        if i+1<=n:
           print(end = "that ")
    print(end = "it\n")
main()