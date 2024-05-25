#Printing 'reverse Pyramid Shape !
'''
* * * * *
 * * * *
  * * *
   * *
    *
'''
n=int(input())
for i in range(n):
        # Print leading spaces
        for j in range(i):
            print(" ", end="")
        # Print stars
        for k in range(n - i):
            print("*", end=" ")
        # Move to the next line
        print()
     
   
#other method
n=int(input())
for i in range(n, 0, -1):
    print(' ' * (n - i) + '* ' * (i))
