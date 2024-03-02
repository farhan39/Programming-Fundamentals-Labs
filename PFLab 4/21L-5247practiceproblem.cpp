#include<iostream>
using namespace std;
int main ()
{

char grade;
double gpa=0.0;
cout<<"enter your grade\n";
cin>>grade;
switch(grade)
{
case 'A':
gpa=4.0;
break;
case 'B':
gpa=3.0;
break;
case 'C':
gpa=2.0;
break;
case 'D':
gpa=1.0;
break;
case 'F':
{gpa=0.0;
cout<<"you failed ";}
break;
default:
cout<<"invalid grade";
}
system("pause");
return 0;

}