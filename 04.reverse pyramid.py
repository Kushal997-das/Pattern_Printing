# Pattern 04
'''
* * * * *
 * * * *
  * * *
   * *
    *
'''
n=int(input())
for i in range(n,0,-1): #for rows
    for j in range(0,n-i): # for space
        print(end=' ')
    for j in range(0,i): # creating star
        print("*",end=' ')
    print()
