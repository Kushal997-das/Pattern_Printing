'''
  *
 * *
*   *
 * *
  *
'''

for row in range(5):
    for col in range(5):
        if (row+col==2) or (row+col==6) or (row==1 and col==3) or (row==3 and col==1):
            print("*",end='')
        else:
            print(end=' ')
    print()