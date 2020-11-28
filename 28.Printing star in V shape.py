#Printing stars in 'V' shape!
'''
*     *
 *   *
  * *
   *

'''
i=0
j=6
for row in range(4):
    for col in range(7):
        if(row==col):
            print('*',end='')
        elif row==i and col==j:
            print('*',end='')
            i+=1
            j-=1
        else:
            print(end=' ')
    print()