#Printing Stars in 'E' Shape !
'''
*****
*
*
*****
*
*
*****
'''
for row in range(7):
    for col in range(5):
        if (col==0) or ((row==0 or row==3 or row==6) and (col>0)):
            print('*',end='')
        else:
            print(end=' ')
    print()