/*
A A A 
B B   
C     
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
        while(col<=n){
            if(row<=col)
            cout<<char(ch+row-1)<<" ";
            col++;
        }
        row++;
        cout<<endl;
    }
}