#include<iostream>
using namespace std;
int main ()
{
    
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        cout<<"*";
        for(int j=n;j>i+1;j--)
        cout<<" ";
        for(int j=n;j>=i+2;j--)
        cout<<" ";
        for(int j=0;j<=i;j++)
        cout<<"*";
        
        cout<<endl;



    }



}