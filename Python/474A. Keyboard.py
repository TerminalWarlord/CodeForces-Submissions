def rearrange(t):
    a = list("qwertyuiop")
    b = list("asdfghjkl;")
    c = list("zxcvbnm,./")
    d = input()
    if t == -1:
        for i in range(len(d)):
            if a.count(d[i]):
                print(end=a[a.index(d[i])-1])
            elif b.count(d[i]):
                print(end=b[b.index(d[i])-1])
            else:
                print(end=c[c.index(d[i])-1])
    else:
        for i in range(len(d)):
            if a.count(d[i]):
                print(end=a[a.index(d[i])+1])
            elif b.count(d[i]):
                print(end=b[b.index(d[i])+1])
            else:
                print(end=c[c.index(d[i])+1])
    print("\n")
                
def main():
    t = input()
    if t == 'R':
        t = -1
    else:
        t = 1
    rearrange(t)
main()