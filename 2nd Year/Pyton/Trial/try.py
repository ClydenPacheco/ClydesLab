#python program to reverse a number
l1=[]
len=int(input("How many elements would you like to enter? "))
l2=[0]*len
print("Enter the elements: ")
for i in range (0,len):
    l1.append(int(input()))
print("The entered array is: ")
for i in l1:
    print(i,end=" ")
print()
print("The reversed array is:")
for i in range (0,len):
    l2[len-i-1]=l1[i]
for i in l2:
    print(i,end=" ")