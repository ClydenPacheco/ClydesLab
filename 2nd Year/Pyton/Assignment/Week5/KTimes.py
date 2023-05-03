input_string=input()
user_list=input_string.split()
num=0
for i in range(len(user_list)):
    user_list[i]=int(user_list[i])
    num=num+1
k=int(input())
for j in range(0,num):
    count=0
    for l in range(0,num):
        if(user_list[l]==user_list[j]):
            count=count+1
            if(count==k):
                the_num=user_list[l]
                break
print(the_num)