/*
4321
321
21
1
*/

#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    
    cout<<"enter number"<<endl;

    cin>>n;

    while(row<=n){

int col=n;
         while (col >=1){
            if (col >= n - row + 2){
               // cout << " ";
              // cout<<col;
            }
            else{
               cout << col;
            }
        
            col--;
            

        }

        
        
        
        
        
        row++;
        cout<<endl;

}
}
