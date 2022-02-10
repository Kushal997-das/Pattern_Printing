/*
A     
B B   
C C C 
*/
#include<iostream>
using namespace std;
int main()
{
    int row=1,n;
    cout<<"enter a number";
    cin>>n;
    while(row<=n){
        int col=1;
        char ch='A';
        while(col<=row){
            cout<<char(ch+row-1)<<" ";
            col++;
        }
        row++;
        cout<<endl;
    }
}