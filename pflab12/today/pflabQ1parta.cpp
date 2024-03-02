//problem 1 part a
//21L-5247
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main ()
{
    string str;
    cout<<"Enter a string "<<endl;
    getline(cin,str);
    int l=str.length();
    for (int i = 0; i < l/2; i++)
    {
        int temp=str[i];
        str[i]=str[l - i-1];
        str[l-i-1]=temp;
    }
    cout<<str;

return 0;
}
