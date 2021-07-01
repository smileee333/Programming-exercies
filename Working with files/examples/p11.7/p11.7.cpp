#include<iostream>
#include<fstream>
#include<string.h>
const int size=4;
class emp{
	char*name;
	int ecode;
	public:
		emp(char*n,int e);
};
emp::emp(char*n,int e){
	strcpy(name,n);
	ecode=e;
};
int main(){
	emp eq[size];
	eq[0]=emp("Amit",1);
	eq[1]=emp("Smile",2);
	eq[2]=emp("Sam",3);
	eq[3]=emp("Mohan",4);
	
	fstream file;
	file.open("Employee.dat",ios::in|ios::out);
	
	for(inti=0;i<4;i++){
		file.write((char*)&eq[i],sizeof(eq[i]));
	}
	file.seekg(0,ios::end);
	int end=file.tellg();
	cout<<"Number of objects stored in Employee.dat is: "<<end/sizeof(emp);
	return 0;
}
