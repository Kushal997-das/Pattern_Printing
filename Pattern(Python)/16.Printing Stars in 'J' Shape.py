#Printing Stars in 'J' Shape !
'''
*****
  *
  *
* *
**
'''
for row in range(5):
    for col in range(5):
        if(row==0) or (row==4 and col<2) or (col==2 and row!=4) or (row==3 and col<1):
            print('*',end='')
        else:
            print(end=' ')
    print()