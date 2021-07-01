#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main(){
	char string[80];
	cout<<"Enter a string: ";
	cin>>string;
	
	int len=strlen(string);
	fstream file;
	cout<<"\nopening the TEXT file and storing the string in it.\n\n";
	file.open("TEXT.txt",ios::out);
	for(int i=0;i<len;i++)
	file.put(string[i]);
	file.close();
	file.open("TEXT.txt",ios::in);
	file.seekg(0);
	char ch;
	cout<<"Reading the file contents: ";
	while(file.eof()==0){
	file.get(ch);
	cout<<ch;	
	}
	cout<<"\n";
	return 0;
}
