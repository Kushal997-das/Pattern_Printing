/*
A       
B C     
C D E   
D E F G 
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
        
            cout<<char(ch+row+col-2)<<" ";
            col++;
        }
        row++;
        cout<<endl;
    }
}