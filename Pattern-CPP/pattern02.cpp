#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    cout<<"enter the number";
    cin>>n;
    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            cout<<row;
            col++;
        }
        row++;
        cout<<endl;
    }
}