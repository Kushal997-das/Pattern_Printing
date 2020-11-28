'''
****
*   *
*   *
****
*   *
*   *
*   *

'''
for row in range(7):
    for col in range(5):
        if (col==0) or (row==0 or row==3)and (col<4) or (col==4)and (row!=0 and row!=3):
            print('*',end='')
        else:
            print(end=' ')
    print()