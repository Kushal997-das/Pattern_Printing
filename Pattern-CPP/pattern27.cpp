/*

1111
 222
  33
   4     
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
         int number=n-row+1;
        while(number)
        {
            cout<<row;
            number--;
        }
        
    
   
         
       
    

    row++;
    cout<<endl;
    
}
}
