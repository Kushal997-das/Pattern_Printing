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
        if (col==0) or (col==m-1 and (row!=0 and row!=3 and row!=6))or((row==0 or row==3 or row==6) and(col>0 or col<m-1)):
            print('*',end='')
        else:
            print(end=' ')
    print()