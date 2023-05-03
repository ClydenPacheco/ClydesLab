val = ['0','1']
flag = 0
l, s = map(int, input().split())
for i in range(l):
  t = input().split()
  for item in t:
    if item not in val:
      flag = 1
if(flag):
    print('No',end='')
else:
    print('Yes',end='')