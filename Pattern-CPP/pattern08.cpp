/*
111
22
3
*/
#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    cout<<"enter a number";
    cin>>n;
    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            if(row<=col)
            cout<<row<<" ";
            col++;
        }
        row++;
        cout<<endl;
    }
}

