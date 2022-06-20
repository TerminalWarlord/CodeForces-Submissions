def main():
    t = int(input())
    for i in range(t):
        n = int(input())
        count = 0
        s = list(input())
        for j in range(n):
            if s[n-1] != '0':
                count = count + int(s[n-1])
                s[n-1] = '0'
            if s[j] != '0':
                count = count + int(s[j]) + 1
                
        print(count)
main()