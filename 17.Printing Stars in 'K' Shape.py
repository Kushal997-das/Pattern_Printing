#Printing stars in K shape!
'''
*   *
* *
**
* *
*   *
'''
for row in range(5):
    for col in range(5):
        if(col==0) or (row==0 and col==4) or (row==1 and (col>1 and col<3)) or (row==2 and (col>0 and col<2)) or (row==3 and (col>1 and col<3)) or (row==4 and (col==4)):
            print('*',end='')
        else:
            print(end=' ')
    print()