//problem 1
//Roll number : 21L-5247
#include <iostream>
using namespace std;
void  table  (int a)
{
    for(int i=1;i<=a;i++)
    {
        cout<<i<<"*"<<"\t";
        for (int j=1;j<=a;j++)
        {
            cout<<i*j;
            cout<<"\t";
        }
        cout<<endl;
    }
}

int main ()
{
    int i;
    cout<<"Enter any number ";
    cin>>i;
    table (i);
    return 0;
}
