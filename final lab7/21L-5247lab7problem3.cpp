//problem 3
//Roll number : 21L-5247

#include<iostream>
using namespace std;
bool isPalindrome (int num)
{
    int num1,rev=0,digit=0;
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
            return 1;
           else return 0;

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
            return 1;
            else return 0;

}

else cout<<"enter valid integer";

return 0;
}

int main ()
{
    int num1;
    cout<<"enter any number "<<endl;
    cin>>num1;
    isPalindrome(num1);
        if (isPalindrome(num1)==1)
        cout<<"Number is palindrome";
    else
        cout<<"Number is not palindrome";
    return 0;
    system ("pause");
}
