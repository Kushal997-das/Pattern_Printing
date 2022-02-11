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
    // For space
    int space=row-1;
    while(space)
    
    {
        cout<<" ";
        space--;
        
    }
    // For star
         int star=n-row+1;
        while(star)
        {
            cout<<"*";
            star--;
        }
        
    
   
         
       
    

    row++;
    cout<<endl;
    
}
}
