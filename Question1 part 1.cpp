/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//If may not work on some compilers in that case include string library
#include <iostream>

using namespace std;

int main()
{
    string str;  
    getline(cin,str);          //User Input
    int length=str.length();  //stores length of the string
    char temp;                //A temporary variable for using later in swapping of letters
    int end=1,start=0,k,mid;  //Start will be 0 at start
    for(int i=0;i<length;i++)
    {
        if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122)  //This loop will be for start of first word
        {
            start=i;
            break;
        }
        
    }
    for(int i=0;i<=length;i++){            //we will see if i is lesser or EQUAL to length if in
        if(str[i]==32||str[i]=='\0'||str[i]==','){      //if check if we are considering last index as \0 If found a space or \0 for last word 
            end=i;                        // store index of space or null position.In Hello World 0 will be start and 5 will be end and 6 will be next start and 11 will be end for both words
            k=end-1;                  //We have to decrement the index on which space or NULL is found because we don't need to swap them                 
            mid=((end-start)/2);
            for(int j=0;j<mid;j++){   //loop for swaping the letters till middle of the word
                temp=str[start+j];
                str[start+j]=str[k];
                str[k]=temp;
                k--;
           
        }
       
            start=end+1;   //store previous end as start and increment it to one because we don't need spaces or null to be swapped
        }
       
    }
    cout<<str;

    return 0;
}
