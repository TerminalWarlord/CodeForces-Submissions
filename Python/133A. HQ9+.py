def search(s):
    flag = False
    for i in range(len(s)):
        if s[i]=='H' or s[i]=='Q' or s[i]=='9':
            flag = True
            break
    return flag

def main():
    s = list(input())
    if search(s):
        print("YES\n")
    else:
        print("NO\n")
main()