#include<iostream>
using namespace std;

float multiply(float a,float b,float c=1 ,float d=1)
{

  return a * b * c * d;

}

float sum(float a,float b,float c=0 ,float d=0)
{
  return a + b + c + d;
}


int main () {
  int i, j, k, l,choice;
  cout<<"how many numbers do you want to work with...2,3 or 4 ?"<<endl;
  cin >> choice;
  switch (choice)
  {
    case 2:
  {
    cout << "Enter two numbers " << endl;
    cin >> i >> j;
    cout << "\nSum of given numbers is " << sum(i,j);
    cout << "\nProduct of given numbers is " << multiply(i, j);
    break;
  }
    case 3:
  {
    cout << "Enter three numbers " << endl;
    cin >> i >> j >> k;
    cout << "\nSum of given numbers is " << sum(i,j,k);
    cout << "\nProduct of given numbers is " << multiply(i,j,k);
    break;
  }
    case 4:
  {
    cout << "Enter four numbers " << endl;
    cin >> i >> j >> k >> l;
    cout << "\nSum of given numbers is " << sum(i,j,k,l);
    cout << "\nProduct of given numbers is " << multiply(i,j,k,l);
    break;
  }
    default : cout << "Invalid Choice.";
  }

  return 0;
}
