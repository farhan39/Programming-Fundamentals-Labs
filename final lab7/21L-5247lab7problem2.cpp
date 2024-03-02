//problem 2
//Roll number : 21L-5247

#include <iostream>
using namespace std;
void printingdiagonal ()
{
    int m,k,factor=0;
    cout<<"Enter any number ";
    cin>>k;
    m=k;
    for (int i=1;i<=m;i++)
    {
        for (int j=1;j<=i;j++)
        {
             if (factor%3==0)
                {
                    factor++;
                    j--;
                }

            else {
                    cout<<factor<<" ";
                    factor++;
                 }


        }
        cout<<"\n";


    }
}

int main ()
{

    printingdiagonal();
    return 0;
}
