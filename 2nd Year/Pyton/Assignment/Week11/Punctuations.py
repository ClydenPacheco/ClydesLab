s = input()
t = ''
for c in s:
   if c.isalnum() or c == ' ':
       t += c
print(t, end='')