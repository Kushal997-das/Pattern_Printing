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
    for j in range(0,n-i): #space
        print(end=' ')
    for k in range(0,i+1):
        print('*',end=' ')
    print()

