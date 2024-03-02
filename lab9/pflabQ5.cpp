//problem 5
#include <iostream>
using namespace std;

void compressedstring(string &s); 

int main() {
    
  string s ; 
  cout<<"Enter any string "<<endl;
  cin>>s;
  compressedstring(s); 
}

void compressedstring(string &s)

{ 
    int length = s.length(); 
    for (int i = 0; i < length; i++) { 
  
         
        int times = 1; 
        while (i < length && s[i] == s[i + 1]) { 
            times++; 
            i++;
        }
        
        if (times == 1)
        {
          cout << s[i];
        }
        else
        {
          cout << times << s[i];
        }
         
    } 
} 
