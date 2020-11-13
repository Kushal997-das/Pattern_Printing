'''
*     *
**    *
* *   *
*  *  *
*   * *
*    **
*     *

'''
for row in range(7):
    for col in range(7):
        if(col==0 or col==6) or(row==col and(col>0 and col<6)):
            print('*', end='')
        else:
            print(end=' ')
    print()