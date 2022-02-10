/*
A 
B C 
D E F
*/

#include<iostream>
using namespace std;
int main()
{
    int row=1,n,count=1;
    cout<<"enter a number";
    cin>>n;
    while(row<=n){
        int col=1;
        char ch='A';
        while(col<=row){
        
            cout<<char(ch+count-1)<<" ";
            col++;
            count++;
        }
        row++;
        cout<<endl;
    }
}