/*
1 2 3 4 
5 6 7 8
9 10 11 12
13 14 15 16
*/
#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    int count=1;
    cout<<"enter the number";
    cin>>n;
    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            cout<<count<<" ";
            count++;  // cout<<col;
            col++;
        }
        row++;
        cout<<endl;
    }

}