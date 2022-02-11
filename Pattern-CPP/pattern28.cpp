/*
   1
  22
 333
4444
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
    int space=n-row;
    while(space)
    
    {
        cout<<" ";
        space--;
        
    }
     // For star
        int col=1;
        while(col<=row)
        {
            cout<<row;
            col++;
        
        }
    row++;
    cout<<endl;
    
}
}
