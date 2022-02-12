#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    cout<<"enter number";
    cin>>n;
    
    while(row<=n)
{     
    int col=1;
    while(col<=n)
    {
       if(col<=n-row+1)
       
        cout<<col;

       
        else
        cout<<"*";

        col++;
    
    }
        col=n;
         while (col >=1){
            if (col >= n - row + 2){
                cout << "*";
            }
            else{
                cout << col;
            }
            col--;
        

        }
         cout<<endl;
        row++;
}
}
