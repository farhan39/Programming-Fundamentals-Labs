
//problem 4

#include<iostream>
using namespace std;
int main ()
{
    int num;
    int num1;
    cout<<"enter the number of month according to the following instructions\n";
    cout<<"1-January\t2-February\t3-March\t4-april\t5-May\t6-June\t7-July\t8-August\n";
    cout<<"9-September\t10-October\t11-November\t12-December\n";
    cin>>num;
    if (num==1)
    cout<<"month is january and has 31 days";
    else if (num==2)
    {
        cout<<"enter the year (e.g 2021)\n";
        cin>>num1;
        if(num1%4==0)
        cout<<"month is february and has 28 days";
        else cout<<"month is february and has 29 days ";
    }
    else if (num==3)
    cout<<"month is march and has 31 days ";
    else if (num==4)
    cout<<"month is april and has 30 days ";
    else if (num==5)
    cout<<"month is may and has 31 days ";
    else if (num==6)
    cout<<"month is june and has 30 days ";
    else if (num==7)
    cout<<"month is july and has 31 days ";
    else if (num==8)
    cout<<"month is august and has 31 days ";
    else if (num==9)
    cout<<"month is september and has 30 days ";
    else if (num==10)
    cout<<"month is october and has 31 days ";
    else if (num==11)
    cout<<"month is november and has 30 days ";
    else if (num==12)
    cout<<"month is december and has 31 days ";
    else cout<<"invalid input";

    system("pause");
    return 0;
    
    
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
