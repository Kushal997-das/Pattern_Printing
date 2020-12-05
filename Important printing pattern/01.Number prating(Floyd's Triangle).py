'''
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
'''
num=1
for row in range(int(input('enter the row'))):
    for col in range(0,row+1):
        print(num,end=' ')
        num+=1
    print()