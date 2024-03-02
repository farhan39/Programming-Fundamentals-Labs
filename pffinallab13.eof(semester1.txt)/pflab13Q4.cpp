//21L-5247  BCS-1F1

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	string result;
	int size = 0;

	ifstream data;
	ofstream resultantfile;

	resultantfile.open("resultant.txt",ios::app);
	data.open("file1.txt");

	cout << "Data in first file is \n";

	while (!data.eof()) {

		getline(data, result);
		cout << result << " ";
		resultantfile << result << endl;

	}

	data.close();
	data.open("file2.txt");

	cout << "\n\nData in second file is \n";

	while (!data.eof()) {

		getline(data, result);
		cout << result << " ";
		resultantfile << result << endl;
	}

	data.close();
	resultantfile.close();

	data.open("resultant.txt");
	
	cout << "\n\nMerged data of both files is : \n\n";


	while (!data.eof()) {

		getline(data, result);
		cout << result << " ";

	}

	data.close();
	cout << endl << endl;
}