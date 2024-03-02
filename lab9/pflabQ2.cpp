//problem 2
//21L-5247 Muhammad Farhan Bukhari 
#include<iostream>
using namespace std;

int returnIndex(int array1[], int size,int num);

int main () {

  int num1 , size1;
  cout<<"Input array size "<<endl;
  cin>>size1;
  int array1[size1];
  cout<<"Input number which is to be searched "<<endl;
  cin>>num1;
  cout<<returnIndex(array1, size1, num1);

  return 0;
}

int returnIndex(int array[], int size,int num)
{
  
  cout<<"Input the values of array "<<endl;
  for (int i=0;i<size;i++)
  {
    cin >> array[i];
    cout<<endl;
  }

  for (int j=0;j<size;j++)
  {
    if (array[j]==num)
     {
         cout << "Required number is at index ";
         return j;
     }
  }
  cout<<"Required number not found ";
  return -1;

}
