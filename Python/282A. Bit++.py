n = int(input())
i = 0
lol = 0
while i<n:
	ch = input()
	if ch[0] == '+' or ch[2] == '+':
		lol += 1
	else:
		lol -= 1
	i += 1
print(lol)