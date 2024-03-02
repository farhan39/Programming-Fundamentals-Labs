#include<iostream>
using namespace std;
int main ()
{
    int yr,birthyear;
    cout<<"input year of your birth \n";
    cin>>yr;
    birthyear=(yr-1900)%12;
    switch(birthyear)
    {
        case 1:
        cout<<"rat";
        break;
        case 2:
        cout<<"ox";
        break;
        case 3:
        cout<<"tiger";
        break;
        case 4:
        cout<<"rabbbit";
        break;
        case 5:
        cout<<"dragon";
        break;
        case 6:
        cout<<"snake";
        break;
        case 7:
        cout<<"horse";
        break;
        case 8:
        cout<<"goat";
        break;
        case 9:
        cout<<"monkey";
        break;
        case 10:
        cout<<"rooster";
        break;
        case 11:
        cout<<"dog";
        break;
        case 12:
        cout<<"boar";
        break;
    }
        
        
     return 0;
     
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
