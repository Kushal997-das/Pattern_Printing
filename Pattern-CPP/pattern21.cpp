/*
D 
C D
B C D
A B C D
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
            ch++;
        }
        row++;
        cout<<endl;
    }
}