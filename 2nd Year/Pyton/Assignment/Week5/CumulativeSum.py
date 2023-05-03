l = list(map(int, input().split()))
prefix_sum = []
for i in range(len(l)):
   if i > 0:
       l[i] = l[i] + l[i-1]
   prefix_sum.append(l[i])
for i in range(len(prefix_sum)-1):
   print(prefix_sum[i], end=' ')
print(prefix_sum[len(prefix_sum)-1], end='')