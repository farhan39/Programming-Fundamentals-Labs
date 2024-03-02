
//problem 5

#include<iostream>
using namespace std;
int main ()
{
   char n='\0';
   cout<<"input an alphabet ";
   cin>>n;
   if ((n>='A')&&(n<='Z')||(n>='a')&&(n<='z'))
   {   cout<<"it is an alphabet, furthermore ";

       switch (n)
        {case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'i':
        case 'I':
        case 'O':
        case 'o':
        case 'u':
        case 'U':
        cout<<"it is a vowel\t";
        break;

        default :
        cout<<"it is a consonant\t ";
        }
        }
        else cout<<"enter an alphabet stupid !";




    system("pause");
    return 0;


}















