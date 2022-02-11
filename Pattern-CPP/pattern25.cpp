/*
   **** 
   ***  
   **   
   *
*/
#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    cout<<"enter number";
    cin>>n;
    while(row<=n)
 {      
        int star=n-row+1;
        while(star)
        {
            cout<<"*";
            star--;
        }
    // No need to add space here --
        /*
        int col=1;
        // For space
        while(col<=row)
        {
            cout<<" ";
            col++;
        }
        */
       // For space
    
        
        cout<<endl;
        row++;
    }
}