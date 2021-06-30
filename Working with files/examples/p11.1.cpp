// creating files with constructor function
#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream outf("ITEM.txt");// connects ITEM file to program in writting mode
	cout<<"Enter item name: ";
	char name[30];
	cin>>name; // get name from keyboard
	outf<<name<<"\n"; // writting to file ITEM
	cout<<"Enter Item cost: ";
	float cost;
	cin>>cost; // get cost from keyboard
	outf<<cost<<"\n"; // writting to file ITEM
	outf.close();
	ifstream inf("ITEM.txt");// connects item file to program in reading mode
	inf>>name;// read name from the file
	inf>>cost;// read cost from file
	cout<<"\n";
	cout<<"Item's name is: "<<name<<"\n";
	cout<<"Item's cost is: "<<cost<<"\n";
	inf.close(); // disconnects ITEM file form ifstream inf
	return 0;
	
}
