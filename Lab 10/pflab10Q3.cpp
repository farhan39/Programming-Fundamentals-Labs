//problem 3
#include<iostream>
using namespace std;

int main () {
    int trace=0;
  int A[3][3];
  cout<<"Enter elements of matrix row wise"<<endl;
  for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3;j++)
        cin >> A[i][j];
    }

    
  for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3;j++)
        {
        cout << A[i][j]<<" ";
        }
        cout << endl;
        trace += A[i][i];
    }
    


cout << "Trace of matrix is " << trace;

return 0;

}

