#include<iostream>
using namespace std;

int addfunc(int a,int b)
{
  return a + b;
}
float addfunc(float a,float b)
{
  return a + b;
}


int main () {

  float x,y;
  cout << "Enter any two numbers " << endl;
  cin >> x >> y ;
  cout <<"Sum of given numbers is "<<addfunc(x, y);
  return 0;
}
