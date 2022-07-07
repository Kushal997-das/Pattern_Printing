#Printing 'reverse Pyramid Shape !
'''
* * * * *
 * * * *
  * * *
   * *
    *
'''
n=int(input())
for i in range(n,0,-1): #for rows
   
    for j in range(0,i): # for space
        print(end=' ')
    for j in range(0,n-i): # creating star
        print("*",end=' ')
     
    print()
#other method
n=int(input())
for i in range(n, 0, -1):
    print(' ' * (n - i) + '* ' * (i))
