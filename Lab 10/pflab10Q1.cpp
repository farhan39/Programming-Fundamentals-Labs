//problem 1
#include<iostream>
using namespace std;

int counter(char str[], int size)
{
  int total = 0, spaces = 0, up = 0, low = 0;
  for (int i = 0; str[i] != 0; i++)
    {
      if ((str[i] >= 97) && (str[i] <= 122))
        low++;
      else if ((str[i] >= 65) && (str[i] <= 96))
        up++;
      else if (str[i]==32)
      spaces++;
      total++;
    }
    cout << endl;
    cout << "uppercase letters in the array are " << up << endl;
    cout << "lowercase letters in the array are " << low << endl;
    
    return total;
  }




int main () {

  char str[50];
  cout << "Enter any string " << endl;
  cin.getline(str,50);
  
  cout << "Characters in the given array are " <<counter(str, 50)<< endl;
  

  return 0;
}
