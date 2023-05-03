r, c = map(int, input().split())
for i in range(r-1):
 for j in range(1,c):
   print(i*c+j, end=' ')
 print(i*c+c)
i = r-1
for j in range(1,c):
 print(i*c+j, end=' ')
print(i*c+c, end='')