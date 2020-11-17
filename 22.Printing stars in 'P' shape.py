#Printing stars in P shape!
for row in range(6):
    for col in range(6):
        if col==0  or (col==5 and (row==1 or row==2)) or (row==0 or row==3)and(col>0 and col<4):
            print('*', end='')
        else:
            print(end=' ')
    print()