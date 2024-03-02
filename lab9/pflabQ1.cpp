//problem 1
//21L-5247 Muhammad Farhan Bukhari
#include<iostream>
using namespace std;

void PrintArray(int array1[],int size);

int main () {

  int size;
  cout<<"Enter size of array "<<endl;
  cin>>size;
  int array2[size];
  PrintArray(array2,size); 
  return 0;

}

void PrintArray(int array1[],int size)
{
  for (int i=0;i<size;i++)
  {
    cout<<"Input value of array for index "<<i<<endl;
    cin>>array1[i];

  }
   cout<<" Values of array are "<<endl;
  for (int i=0;i<size;i++)
  {
    cout<<array1[i]<<"\t";
  }
  
}