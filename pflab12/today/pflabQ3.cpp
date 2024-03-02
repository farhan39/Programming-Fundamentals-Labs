//problem 3
//21L-5247
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string name;
    int num1,num2,num3;

    ifstream file;

    file.open("quiz.txt",ios::out);
    while (!file.eof())
    {
        file>>name>>num1>>num2>>num3;
        cout<<name<<" "<<num1+num2+num3;
        cout<<endl;
    }
    file.close();

    return 0;

}
