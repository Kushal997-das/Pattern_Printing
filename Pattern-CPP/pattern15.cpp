/*
A B C
E F G
I J K
*/
#include<iostream>
using namespace std;
int main()
{
    int row=1,n,count=1;
    cout<<"enter the number";
    cin>>n;
    while(row<=n){
        int col=1;
        char ch='A';
        while(col<=n)
        {
            cout<<char(ch+count-1)<<" ";
            col++;
            count++;
        }
        row++;
        cout<<endl;


    }
}