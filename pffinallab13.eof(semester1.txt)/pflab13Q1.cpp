//21L-5247  BCS-1F1


#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;
double gpacalculator (float gradepoints,int credithours)
{
    return credithours*gradepoints;
}

int main ()
{
    string name;
    cout<<"Enter your name"<<endl;
    cin>>name;
    ifstream myfile;
    myfile.open("grade.txt");
    int totalch=0,ch;    //totalch->totalcredithours
    float gp,numerator=0;
    while (!myfile.eof())
    {
        myfile>>gp>>ch;
        numerator+=gpacalculator(gp,ch); 
        totalch+=ch;
    }
    myfile.close();
    float finalgpa=numerator/totalch;
    cout<<name<<", your final gpa is "<<finalgpa<<endl;
    
    return 0;
}
