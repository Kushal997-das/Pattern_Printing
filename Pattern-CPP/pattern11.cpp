/*
1
2 3
3 4 5
4 5 6 7
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
        int col=1;
        //int count=row;
        while(col<=row){
            
                cout<<row+col-1<<" ";
                //count++;
            
                col++;

        }
        row++;
        cout<<endl;
    }
}
