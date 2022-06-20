def balance(t):
    while t:
        n = int(input())
        s = input()
        flag = False
        a = 0
        for i in range(n-1):
            if s[i] != s[i+1]:
                a = i+1;
                flag = True
                break
        if flag:
            print(a, a+1)
        else:
            print(-1, -1)
        t -= 1
    
def main():
    t = int(input())
    balance(t)
main()