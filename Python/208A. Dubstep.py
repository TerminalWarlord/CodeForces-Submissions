def main():
    s = input()
    while 'WUB' in s:
        s = s.replace('WUB', ' ')
        s = s.replace('  ', ' ')
    while True:
        if s[0] == ' ':
            s = s[1:]
        else:
            break
    print(s)
main()