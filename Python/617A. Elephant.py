n = int(input())
i = n
j = 0
if i>=5:
    j = j + int(i/5)
    i = i%5
if i>=4:
    j = j + int(i/4)
    i = i%4
if i>=3:
    j = j + int(i/3)
    i = i%3
if i>=2:
    j = j + int(i/2)
    i = i%2
j = j + i;
print(j)