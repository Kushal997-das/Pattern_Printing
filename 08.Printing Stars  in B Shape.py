#Printing Stars in 'B' Shape !
'''
enter the row7
enter the cols5
*****
*   *
*   *
*****
*   *
*   *
*****
'''

n=int(input('enter the row'))
m=int(input('enter the cols'))

for row in range(n):
    for col in range(m):
        if (col==0 or col==m-1) or((row==0 or row==3 or row==6) and(col>0 or col<m-1)):
            print('*',end='')
        else:
            print(end=' ')
    print()
# if you want  more convenient B , then below source code for this :D

'''
**** 
*   *
*   *
**** 
*   *
*   *
**** 
'''
for row in range(7):
    for col in range(5):
        if (col==0) or (col==4 and (row!=0 and row!=3 and row!=6)) or ((row==0 or row==3 or row==6) and (col>0 and col<4)):
            print('*',end='')
        else:
            print(end=' ')
    print()

