def main():
    s = input()
    if s[0]=='-':
        s = list(s)
        s[len(s)-2] = min(s[len(s)-1], s[len(s)-2])
        s.pop(len(s)-1)
        if s[1] == '0':
            s.pop(0)
        print("".join(s))
    else:
        print(s)
main()