#include <cmath>
#include <iostream>

using namespace std;

int main() {
   int num, num1, remainder, n = 0, result = 0, power;
   cout << "Enter an integer: ";
   cin >> num;

   num1 = num;

   while (num1 != 0) {
      num1 /= 10;
      n++;
   }
   num1 = num;

   while (num1 != 0) {
      remainder = num1 % 10;
      power=pow(remainder, n);
      result+=power;
      num1 /= 10;
   }

   if (result == num)
      cout <<"Given Integer  is an Armstrong number.";
   else
      cout <<"Given integer is not an Armstrong number.";
   return 0;
}
