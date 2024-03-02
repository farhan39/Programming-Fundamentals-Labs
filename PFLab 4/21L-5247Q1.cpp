#include<iostream>
using namespace std;
int main ()
{
int marks=0;
char grade='\0';
cout<<"enter your marks \n";
cin>>marks;
if ((marks>=86)&&(marks<=100))
cout<<"your grade is A";
else if ((marks>=80)&&(marks<=86))
cout<<"your grade is B+";
else if ((marks>=71)&&(marks<=79))
cout<<"your grade is B";
else if ((marks>=67)&&(marks<=70))
cout<<"your grade is C+";
else if ((marks>=61)&&(marks<67))
cout<<"your grade is C";
else if ((marks>=51)&&(marks<60))
cout<<"your grade is D";
else if ((marks>=00)&&(marks<50))
cout<<"your grade is C";







system("pause");
return 0;

}