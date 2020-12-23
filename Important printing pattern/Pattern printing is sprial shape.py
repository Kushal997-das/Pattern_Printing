n=5
list1=[[0 for x in range(n)] for y in range(n)]
low=0
high=n-1
k=1
for i in range(n+1//2):
    for j in range(low,high+1):
        list1[i][j]=k
        k+=1
    for j in range(low+1,high+1):
        list1[j][high]= k
        k+=1
    for j in range(high-1,low-1,-1):
        list1[high][j]=k
        k+=1
    for j in range(high-1,low,-1):
        list1[j][low]
        k +=1
    low+=1
    high-=1
for i in range(n):
    for j in range(n):
        print(list1[i][j],end='\t')
    print()
