l = int(input())
m = []
for i in range(l):
  s = input().split()
  m.append(s)
for i in range(l):
  for j in range(l):
    if i < j: 
      m[i][j] = 0
for i in range(l-1):
	for j in range(l-1):
 		print(m[i][j],end=' ')
	print(m[i][l-1])
for j in range(l-1):
 	print(m[l-1][j],end=' ')
print(m[l-1][l-1])