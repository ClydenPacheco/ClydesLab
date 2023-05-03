t = int(input())
while t > 0:
 a = 'abcdefghijklmnopqrstuvwxyz'
 s = input()
 L = []
 for i in a:
   L.append(s.count(i))
 cnt = 0
 maxodd = 0
 maxoddind = -1
 for i in range(len(L)):
   if L[i]%2 == 1 and L[i] > maxodd:
     maxodd = L[i]
     maxoddind = i
 for i in range(len(L)):
   if L[i] > 0:
     if L[i] % 2 == 0:
       cnt += L[i]
     else:
       if i==maxoddind:
         cnt += L[i]
       else:
         cnt += L[i]-1
 print(cnt)
 t = t-1