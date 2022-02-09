#Printing stars in Q shape!
'''
 ***
*   *
*   *
*   *
 ***
    *
'''
for row in range(6):
    for col in range(5):
        if((col==0 or col==4) and (row>0 and row<4)) or (row==0 or row==4) and (col>0 and col<4) or (col==4 and row==5):
            print('*', end='')
        else:
            print(end=' ')
    print()