#Pattern -05
'''
     *
    * *
   * * *
  * * * *
 * * * * *
'''
n=int(input())
for i in range(0,n): #for rows
    for j in range(0,n-i-1): #space
        print(end=' ')
    for k in range(0,i+1):
        print('*',end=' ')
    print()

#other method

n=int(input())
for i in range(n):
    print(' '*(n-i-1)+'* '*(i+1)) 
