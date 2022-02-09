/*
****
***
**
*
*/
#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    cout<<"enter the row";
    cin>>n;
    while(row<=n)
    {
        int col=1;
    while(col<=n)
        {
            if(row<=col)
            cout<<"*";
            col++;
        }
        row++;
        cout<<endl;
    }
}

