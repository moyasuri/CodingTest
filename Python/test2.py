n=int(input())

k=str(n)
list1=list(map(int, k))
width=[]
tip=1


for i in range(1, len(list1)):
    width.append(list1[i]-list1[i-1])
    for i in range(1,len(width)):
        if width[i]==width[i-1]:
            tip+=1
print(width)
print(tip)
print(len(width))

if tip==len(width):
    print(1)
else:
    print(0)