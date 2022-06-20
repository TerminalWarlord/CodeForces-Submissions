def main():
    s = list(input())
    t = list(input())
    for i in range(len(s)):
        if s[i] == t[i]:
            s[i] = '0'
        else:
            s[i] = '1'
    print("".join(s), "\n")
     
main()