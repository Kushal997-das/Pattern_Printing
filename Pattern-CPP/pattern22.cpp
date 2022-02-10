/*
D 
C C 
B B B 
A A A A
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
        char ch='A'+n-row;
        while(col<=row){
        
            cout<<ch<<" ";
            col++;
        
        }
        row++;
        cout<<endl;
    }
}