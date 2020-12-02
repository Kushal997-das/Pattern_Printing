j=4
i=0
k=0
p=4
for row in range(5):
    for col in range(5):
        if (row==i and col==j)  :
            print('*',end='')
            i+=1
            j-=1
        elif row==col:
            print("*",end='')
        else:
            print(end=' ')
    print()
