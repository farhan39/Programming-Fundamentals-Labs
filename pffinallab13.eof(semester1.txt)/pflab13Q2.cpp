//21L-5247  BCS-1F1

#include<iostream>
#include<fstream>
#include<string.h>
#include <cstring>

using namespace std;
int main ()
{
    cout<<"Enter the string you want to search "<<endl;
    string strREQ;
    cin>>strREQ;
    int lengthofstrREQ=strREQ.length();
    ifstream hello;
    hello.open("inputfileQ2.txt");
    int counter=0,counter1=0;
    while (!hello.eof())
    {
        string str;
        hello>>str;
        int lengthofstr=str.length(); 
        if (lengthofstr==lengthofstrREQ)
        {
            char arr1[lengthofstr+1],arr2[lengthofstrREQ+1];
            strcpy(arr1, str.c_str());
            strcpy(arr2, strREQ.c_str());
            counter=0;
            for (int i = 0; i < lengthofstr; i++)
            if (arr1[i]==arr2[i])
            counter++;
            if (counter==lengthofstrREQ)
            counter1++;

        }
    }
    hello.close();
    if (counter1==0)
    cout<<"There is no occurence of this word"<<endl;
    else cout<<"occurences are "<<counter1;


}
