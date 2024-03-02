//problem 4
//21L-5247 Muhammad Farhan Bukhari
#include<iostream>
using namespace std;

void BinomSum(const int array[], int size);

int main () {
  
  int size ;
  cout << "Enter size for the array " << endl;
  cin >> size;
  int array1[size];
  
  for (int i=0;i<size;i++)
  {
    cout << "Input number for the index " << i << endl;
    cin>>array1[i];
  }  
  
  BinomSum(array1,size);
  return 0;

}

void BinomSum(const int array[],int size)

{
  int secondarray[size] , modifiednum = 0;
  for (int i=0;i<size;i++)
  {
    for (int j=1;j<=array[i];j++)
  {
    modifiednum=modifiednum+j;
    secondarray[j-1]=modifiednum;
  }
  

  cout<< "Modified value at index " << i << " is " << modifiednum << endl;
  modifiednum=0;

  }
}