def main():
    s = list(input().split("{")[1].split("}")[0].split(", "))
    d = 0
    if s[0] != '':
        for i in range(len(s)):
            for j in range(i+1, len(s)):
                if s[i] == s[j]:
                    d += 1
                    break
        d = len(s) - d
    else:
        d = 0
    print(d)
main()