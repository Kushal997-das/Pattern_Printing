i = 0
j = 4

for row in range(5):
    for col in range(5):

        if (col==row and col<3) or (col==2 and row>2):
            print("*",end='')
        elif row==i and col==j and row<2  :
            print("*", end='')
            i+=1
            j-=1
        else:
            print(end=' ')
    print()