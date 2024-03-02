//problem 1 part b
//21L-5247
#include<iostream>
#include<fstream>
using namespace std;
int main()
{

    int n=5;
    string arr[n];
    int len;
    cout<<"Please "<<n<<" strings "<<n<<endl;
    for (int i=0;i<n;i++)
        cin>>arr[i];
    cout<<endl<<"Entered string is "<<endl;
    for (int i=0;i<n;i++)
        cout<<arr[i];

    for (int i=0;i<n;i++)
    {
        len=arr[i].length();
        for (int j=0;j<len/2;j++)
        {
            char temp=arr[i][j];
            arr[i][j]=arr[i][len-1-i];
            arr[i][len-1-j]=temp;
        }
    }
    cout<<endl<<"reversed string becomes"<<endl;
    for (int j=0;j<n;j++)
        cout<<arr[j]<<" ";


    system("pause");
    return 0;

}
