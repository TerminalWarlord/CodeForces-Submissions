def main():
    s = list(input())
    t = list(input())
    a = s + t
    vecsize = len(a)
    u = list(input())
    for i in range(len(u)):
        for l in range(len(a)):
            if u[i] == a[l]:
                a.pop(l)
                break
    if len(a)==0 and vecsize==len(u):
        print("YES\n")
    else:
        print("NO\n")
main()