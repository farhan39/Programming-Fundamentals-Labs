//problem 2
//21L-5247
#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
    fstream myfile;

    myfile.open("info.txt",ios::in);
    int arr1[20]={0};
    int j =0;
    while (!myfile.eof())
    {
        myfile>>arr1[j];
        j++;
    }
    myfile.close();
    myfile.open("Even Number.txt",ios::out);
    for (int i=0;i<20;i++)
    {
        if(arr1[i]%2==0)
            {
                myfile<<arr1[i]<<endl;
            }
    }
    myfile.close();

    system ("pause");
    return 0;

}
