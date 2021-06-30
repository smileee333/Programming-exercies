#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream fout;// create output file stream
	fout.open("country.doc"); // connects program to country file in writting mode
	fout<<"United states of ameria"<<"\n";
	fout<<"United Kingdom"<<"\n";
	fout<<"South Korea"<<"\n";
	fout.close(); // disconnects country file
	
	fout.open("capital.doc"); // connects program to capital file in writting mode
	fout<<"Washington"<<"\n";
	fout<<"London"<<"\n";
	fout<<"Seoul"<<"\n";
	fout.close(); // disconnects capital file
	
	// reading files
	const int N=80;
	char line[N];
	
	ifstream fin;
	fin.open("country.doc"); // connects country file to program in reading mode
	cout<<"Contents of country file: \n";
	while(fin){
		fin.getline(line,N); //reads characters into line string of dimension N until \n is not encountered in the file 
		cout<<line<<"\n"; // displaying	
	}
	fin.close(); // disconnects "Country file 
	cout<<"--------------------------------------------------------\n\n";
	fin.open("capital.doc");
	cout<<"Contents of capital file are: \n";
	while(fin){
		fin.getline(line,N);
		cout<<line<<"\n";		
	}
	fin.close();
	
	return 0;
	
}
