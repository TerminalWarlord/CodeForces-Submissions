def main():
    n = int(input())
    s = list(input())
    a = 97
    i = 0
    count = 0
    while i<n:
        if s[i].isupper():
            s[i] = s[i].lower()
        if ord(s[i]) == a:
            count += 1
            a += 1
            i = -1
        if count == 26:
            break
        i += 1
    if count==26:
        print("YES\n")
    else:
        print("NO\n")
main()