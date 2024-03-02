//21L-5247  BCS-1F1

#include<iostream>
#include<fstream>
#include<string.h>
#include <cstring>

using namespace std;
int main ()
{
    ifstream hello;
	string str;
    hello.open("inputfileQ2.txt");
    int spaces=0,digits=0,fullstops=0,alph=0, nooflines = 0, noofwords = 0;
    while (!hello.eof())
    {
            getline(hello, str);
			nooflines++;
            int lengthofstr=str.length();
            for (int i = 0; i < lengthofstr; i++)
            {
                
                    if (((str[i]>='a')&&(str[i]<='z'))||((str[i]>='A')&&(str[i]<='Z')))
                    alph++;    
                    else if ((str[i]>='0')&&(str[i]<='9'))        
                    digits++;
                    else if (str[i]=='.')
                    fullstops++;
                    else if (str[i]==' '){
						spaces++;
						noofwords++;
					}
            } 
            

    }
        int letters=alph+digits+fullstops;
        noofwords += nooflines;
        hello.close();
        cout<<"Number of lines in the file are "<<nooflines<<endl;     
        cout<<"Number of alphabets in the file are "<<alph<<endl;     
        cout<<"Number of digits in the file are "<<digits<<endl;     
        cout<<"Number of spaces in the file are "<<spaces<<endl;     
        cout<<"Number of full stops in the file are "<<fullstops<<endl;     
        cout<<"Number of letters in the file are "<<letters<<endl;    
        cout<<"Number of words in the file are "<<noofwords<<endl;

        return 0; 


}