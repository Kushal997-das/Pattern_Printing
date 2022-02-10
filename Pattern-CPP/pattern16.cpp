/*
A B C 
B C D
C D E
*/

#include<iostream>
using namespace std;
int main()
{
    int row=1,n;
    cout<<"enter number";
    cin>>n;
    while(row<=n){
        int col=1;
        char ch='A';
        while(col<=n)
        {
            cout<<char(ch+row+col-2)<<" ";
            col++;
        }
        row++;
        cout<<endl;
    }
}