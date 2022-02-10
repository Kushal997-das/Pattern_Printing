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
    cout<<"enter number"; //char ch='A'+n-row;
    cin>>n;
    while(row<=n){
        int col=1;
        char ch='A'+row-1; // one way
      // char ch='A'; // second way
        while(col<=n)
        {
           // cout<<char(ch+row+col-2)<<" "; // second way
           cout<<ch<<" "; // one way
            col++;
            ch++;
        }
        row++;
        cout<<endl;
    }
}