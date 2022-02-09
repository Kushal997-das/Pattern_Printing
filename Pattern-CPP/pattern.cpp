'''
****
****
****
****
'''
#include<iostream>
using namespace std;
int main()
{
    int n,row=0;
    cout<<"Enter the row:-";
    cin>>n;
    while(row<n)
    {   int col=0;
        while(col<n)
        {
            
            cout<<"*";
            col++;

        }
        row++;
        cout<<endl;


        
    }


}