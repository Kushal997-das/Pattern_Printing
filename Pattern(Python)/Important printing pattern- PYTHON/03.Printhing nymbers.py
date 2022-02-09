'''
enter how many rows you want:5
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
'''
for row in range(int(input('enter how many rows you want:')),0,-1):
    for col in range(1,row+1):
        print(col,end=' ')
    print()
