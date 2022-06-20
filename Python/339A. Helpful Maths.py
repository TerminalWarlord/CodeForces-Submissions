a = input()
l = len(a)
i, j,k,m= 0,0,0,0
b = []
c = []
d = []
while i<l:
	if a[i] == '1':
		b.append('1+')
	elif a[i] == '2':
		c.append('2+')
	else:
		d.append('3+')
	i += 2
b = "".join(b)
c = "".join(c)
d = "".join(d)
g = b + c + d
print(g[:-1])