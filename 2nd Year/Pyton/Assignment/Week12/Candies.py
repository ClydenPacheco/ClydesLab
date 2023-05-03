l=list(map(int,input().split()))
m=0
total=sum(l)
if total%len(l)!=0:
    print('-1',end='')
else:
    avg=total//len(l)
    for i in l:
        if i > avg:
            m+=(i-avg)
    print(m,end='')