s1 = input()
s2 = input()
l1 = []
l2 = []
for c in s1:
  if c.isalpha():
    l1.append(c.lower())
for c in s2:
  if c.isalpha():
    l2.append(c.lower())
l1.sort()
l2.sort()
if len(l1)!=len(l2) : print("No")
else:
  for i in range(len(l1)):
    if l1[i]!=l2[i]:
      print("No",end='')
      break
  else:
    print("Yes",end='')