

#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    cout<<"enter number"<<endl;
    cin>>n;


while(row<=n){
// For star
        int col=n;
         int star=n-row+1;
        while(col>=1)
        {   if(col>=star)
            cout<<"8";
           star--;
            col++;
            
        }
        
        row++;
        cout<<endl;

}
}