def main():
    t = int(input())
    for _ in range(t):
        s = input()
        if int(s)%7==0:
            print(s)
        else:
            for i in range(len(s)):
                s1 = list(s)
                flag=False
                if int(s1[i])!=9:
                    while int(s1[i])<=8:
                        s1[i] = str(int(s1[i])+1)
                        s2 = "".join(s1)
                        if int(s2)%7==0:
                            flag=True
                            break
                if int(s1[i])==9:
                    while int(s1[i])>=0:
                        s1[i] = str(int(s1[i])-1)
                        s2 = "".join(s1)
                        if int(s2)%7==0:
                            flag=True
                            break
                if flag:
                    break
            # print(s+" "+str(s2))
            print(str(s2))
main()