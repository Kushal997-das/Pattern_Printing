'''
 ***
*   *
*   *
*****
*   *
*   *
*   *
'''

n=int(input("enter the row"))
m=int(input("enter the column"))
for row in range(n):
    for col in range(m):
        if ((col==0 or col==m-1) and (row!=0)) or ((row==0 or row==n-4) and (col>0 and col<m-1)):
            print('*',end='')
        else:
            print(end=' ')
    print()

#other method
''' 
      *
     ***
    *****
   *******
  *********
 *         *
*           *
'''
n = int(input())
k = int(input())
for i in range(n):
    if i == 0:
        print(' ' * (n - i - 1) + '*')
    elif i < k:

        print(' ' * (n - i - 1) + '*' + '*' * (i + i - 1) + '*')
    else:
        print(' ' * (n - i - 1) + '*' + ' ' * (i + i - 1) + '*')
