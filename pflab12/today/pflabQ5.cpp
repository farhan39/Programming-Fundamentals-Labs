//problem 5
//21L-5247
#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
    int dataofcustomer[7][5]={0}, flag[10] = { 0 }, ans[4][2] = { {1,0}, {2,0} , {3,0} , {4,0} }, avg = 0;

	fstream file;
	file.open("bank.txt", ios::in);

	while (!file.eof()) {

		for (int i = 0; i < 7; i++) {

			file >> dataofcustomer[i][0] >> dataofcustomer[i][1] >> dataofcustomer[i][2] >> dataofcustomer[i][3] >> dataofcustomer[i][4];

			if (dataofcustomer[i][0] == 1)
            {

				flag[0]++;
				ans[0][1] = (ans[0][1] + (((dataofcustomer[i][3] * 60) + dataofcustomer[i][4]) - ((dataofcustomer[i][1] * 60) + dataofcustomer[i][2])))/flag[0];

			}

			else if (dataofcustomer[i][0] == 2)

			{

				flag[1]++;
				ans[1][1] = (ans[1][1] + (((dataofcustomer[i][3] * 60) + dataofcustomer[i][4]) - ((dataofcustomer[i][1] * 60) + dataofcustomer[i][2])))/flag[1];

			}

			else if (dataofcustomer[i][0] == 3)

            {

				flag[2]++;
				ans[2][1] = (ans[2][1] + (((dataofcustomer[i][3] * 60) + dataofcustomer[i][4]) - ((dataofcustomer[i][1] * 60) + dataofcustomer[i][2])))/flag[2];

			}

			 else if (dataofcustomer[i][0] == 4)

            {

				flag[3]++;
				ans[3][1] = (ans[3][1] + (((dataofcustomer[i][3] * 60) + dataofcustomer[i][4]) - ((dataofcustomer[i][1] * 60) + dataofcustomer[i][2]))) / flag[3];

			}

		}

	}

	for (int i = 0; i < 7; i++) {

		for (int j = 0; j < 5; j++) {

			cout << dataofcustomer[i][j] << " ";

		}

		cout << endl;
	}

	cout << endl;
	cout << "Average time per teller is given by \n\n";

	for (int i = 0; i < 4; i++) {

		for (int j = 0; j < 2; j++) {

			if (j == 1)
				avg = avg + ans[i][j];

			cout << ans[i][j] << " ";

		}

		cout << endl;
	}
    avg=avg/4;
	cout << "\nCollective average waiting time is " << avg;
	cout << endl;

}
