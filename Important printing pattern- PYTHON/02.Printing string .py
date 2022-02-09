'''
K
K u
K u s
K u s h
K u s h a
K u s h a l
'''
String=input('enter the string:')
for row in range(len(String)):
    for col in range(row+1):
        print(String[col],end=' ')
    print()
