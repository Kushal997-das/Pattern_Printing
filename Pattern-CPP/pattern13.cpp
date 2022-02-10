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
    char ch='A';

    while(col<=n)
    {
        cout<<char(ch+row-1)<<" ";
        col++;
    }
    row++;

    cout<<endl;

}
}