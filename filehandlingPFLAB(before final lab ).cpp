//Instructor Name: Huda
//Section: 3F

#include<iostream>
#include<fstream>
#include <string.h>
using namespace std;
//function for reading a file

void fileread(char pathoffile[]){ //pathoffile will be passed from main as a string and will contain the address of you file if you are in same directory as your project then pathoffile will be same as name
	ifstream fin;                  // 
	string name;
	int marks1,marks2,marks3;
	fin.open(pathoffile,ios::in);//ios::in is for reading mode but it's sometimes okay if you don't specify the mode
	if(fin.is_open()){
	
	while(!fin.eof()){
		fin>>name;  //will read word only
		fin>>marks1; //similarly you can store it in an array index too by fin>>arr[i]
		fin>>marks2;
		fin>>marks3;
		cout<<name<<" "<<marks1<<" "<<marks2<<" "<<marks3<<endl;
	}
	//always close the file
	fin.close();
}
	else
		cout<<"The file could not get opened"<<endl;
}
//function for writing in a file
void filewrite(char pathoffile[]){
	ofstream fout;
	string name;
	int m1,m2,m3;
	int numofrecords;
	fout.open(pathoffile,ios::app);   //file is created in append mode
	cout<<"How many records fo you want to store :";
	cin>>numofrecords;
	if(fout.is_open()){
	
	for(int i=0;i<numofrecords;i++){
		cout<<" Enter name"<<endl;
		cin>>name;
		cout<<"Enter marks of first quiz"<<endl;
		cin>>m1;
		cout<<"Enter marks of second quiz"<<endl;
		cin>>m2;
		cout<<"Enter marks of third quiz"<<endl;
		cin>>m3;
	
		if(i!=numofrecords-1)//if record is not last , we will write endl otherwise not
			fout<<name<<" "<<m1<<" "<<m2<<" "<<m3<<endl;
	    else
	     	fout<<name<<" "<<m1<<" "<<m2<<" "<<m3;
	    
		
		system("CLS");
		
	}
}
	else
		cout<<"File could not be opened";
	
	
}


int main(){
	char filename[]={"studentrecord.txt"};
	
	filewrite(filename);
	fileread(filename);
	
	return 0;
}
