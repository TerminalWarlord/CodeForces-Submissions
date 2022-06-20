t = int(input())
i = 0
while i<t:
  mod = 0
  l, r = input().split()
  l = int(l)
  r = int(r)
  if r == l:
    mod = 0
  elif r/2+1 >= l:
    mod = r%(r/2+1)
    if mod != round(mod):
        mod = mod+0.1;
    else:
        pass
  else:
    mod = -(l-r)
  print(f"{round(mod)}")
  i += 1