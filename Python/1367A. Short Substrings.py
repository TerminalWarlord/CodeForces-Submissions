def shortstr(t):
    for i in range(t):
        s = list(input())
        a = []
        a.append(s[0])
        j = 1
        while j<len(s)-1:
            a.append(s[j])
            j+=2
        a.append(s[-1])
        print("".join(a))

def main():
    t = int(input())
    shortstr(t)
main()