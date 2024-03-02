#include<iostream>
using namespace std;
int main ()
{
    int num,rev=0,num1,digit=0;
    cout<<"enter any number "<<endl;
    cin>>num;
    if (num>0)
    {
        num1=num;
       while(num1!=0)
       {
           digit=num1%10;
           rev=(rev*10)+digit;
           num1=num1/10;
       }
           if(num==rev)
            cout<<"Number is palindrome";
           else cout<<"number is not palindrome";

    }
   else if(num<0)
   {
        num=num*-1;
        num1=num;
       while(num1!=0)
       {
           digit=num1%10;
           rev=(rev*10)+digit;
           num1=num1/10;
       }
           if(num==rev)
            cout<<"Number is palindrome";
           else cout<<"number is not palindrome";

}

else cout<<"enter valid integer";


}
