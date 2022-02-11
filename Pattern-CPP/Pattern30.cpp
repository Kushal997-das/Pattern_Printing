/*
   1   
  121
 12321
1234321

*/

#include<iostream>
using namespace std;
int main()
{
    int n=1,row=1;
    cout<<"enter row";
    cin>>n;
    while(row<=n)
    {
        //for space
        int space=n-row;
        while(space)
        {
            cout<<" ";
            space--;
        }
        //for 1st triangle
        int col=1;
        while(col<=row)
        {
            cout<<col;
            col++;
        }

        // for 2nd triangle
        int second=row-1;
        while(second)
        {
            cout<<second;
            second--;
        }
        row++;
        cout<<endl;
    }
}