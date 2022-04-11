/*
1 2 3 4
5 6 7
8 9
10
*/

#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    int count=1;
    cout<<"enter number";
    cin>>n;
    
    while(row<=n)
    {
        int col=1;
        while(col<=n){
        if(row<=col)//col<=row
        {
            
                cout<<count<<" ";
                count++;
        }
                col++;
            }
            row++;
        cout<<"\n";
            
        }
        
    }


