def main():
    s = input()
    if s[0]!='1':
        print("NO")
        return 0
    count=0
    for i in range(len(s)):
        if s[i]!='1' and s[i]!='4':
            print("NO")
            return 0
        if s[i] == '4':
            count+=1
            if count>2:
                print("NO")
                return 0
        else:
            count=0
    print("YES")
main()