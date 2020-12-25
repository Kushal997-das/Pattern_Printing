'''
enter the number:5
1	2	3	4	5
16	17	18	19	6
15	24	25	20	7
14	23	22	21	8
13	12	11	10	9
'''
n=int(input('enter the number:'))
n_list=[[0 for i in range(n)]for j in range(n)]
low=0
high=n-1
k=1
for i in range((n//2)+1):
    for j in range(low,high+1):
        n_list[i][j]=k
        k+=1
    for j in range(low+1,high+1):
        n_list[j][high]=k
        k+=1
    for j in range(high-1,low-1,-1):
        n_list[high][j]=k
        k+=1
    for j in range(high-1,low,-1):
        n_list[j][low]=k
        k+=1
    low+=1
    high-=1
for i in range(n):
    for j in range(n):

        print(n_list[i][j],end='\t')
    print()
