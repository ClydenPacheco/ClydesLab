l = int(input())
m = []
flag = 0
for i in range(l):
  s = input().split()
  m.append(s)
for i in range(l):
  for j in range(l):
    if m[i][j] != m[j][i]: 
      flag = 1
if(flag):
    print('No',end='')
else:
    print('Yes',end='')