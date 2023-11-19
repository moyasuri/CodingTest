#1065번 DH 
def ishansu(n):
    k=str(n)
    list1=list(map(int, k))
    width=[]
    tip=1


    for i in range(1, len(list1)):
        width.append(list1[i]-list1[i-1])
        for i in range(1,len(width)):
            if width[i]==width[i-1]:
                tip+=1
    
    if tip==len(width):
        return 1
    else:
        return 0


n=int(input())
number=0

if n<100:
    print(n)

else :
    for i in range(100, n+1):
        if ishansu(i)==1:
            number +=1
    print(number+99)