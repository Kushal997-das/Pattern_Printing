for row in range(5):
    for col in range(5):
        if(row==4) or (col==0 or col==4 ) and (row<4):
            print('*',end='')
        else:
            print(end=' ')
    print()