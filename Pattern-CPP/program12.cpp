/*
1
2 1
3 2 1
4 3 2 1
*/

#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    cout<<"enter number";
    cin>>n;
    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
            cout<<(row-col+1)<<" ";
            
            col++;
        }
        row++;
        cout<<endl;
    }
}

