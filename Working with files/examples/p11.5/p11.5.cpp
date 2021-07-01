#include<iostream>
#include<fstream>
using namespace std;

const char*filename="BINARY.csv";

int main(){
	float height[5]={175.5,153.0,167.25,160.70,11.5};
	
	ofstream outfile;
	outfile.open(filename);
	outfile.write((char*)&height,sizeof(height));
	outfile.close();
	for(int i=0;i<5;i++)
	height[i]=0;
	ifstream infile;
	infile.open(filename);
	infile.read((char*)&height,sizeof(height));
	for(int i=0;i<5;i++){
		cout<<height[i]<<" ";
	}
	infile.close();
	return 0;
}
