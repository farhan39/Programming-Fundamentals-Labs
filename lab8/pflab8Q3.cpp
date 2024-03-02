#include<iostream>
using namespace std;

void swapper(float &a,float &b)
{
  a=a+b;
  b=a-b;
  a=a-b;

}
int main () {

  float x,y;
  cout<<"Enter any two numbers "<<endl;
  cin>>x>>y;
  swapper(x,y);
  cout<<"Swapped values are "<<x<<" and "<<y;
  return 0;
}
