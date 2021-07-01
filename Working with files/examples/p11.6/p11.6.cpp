#include<iostream>
#include<fstream>
using namespace std;
class INVENTORY{
	public:
	char name[10];
	int code;
	float cost;
	void readdata(void);
};
void INVENTORY::readdata(void){
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter code: ";
	cin>>code;
	cout<<"Enter cost: ";
	cin>>cost;
	
};
int main(){
	INVENTORY item[3];
	fstream file;
	file.open("STOCK.txt",ios::out);
	cout<<"Enter details for 3 items: \n";
	for(int i=0;i<3;i++){
		item[i].readdata();
		file.write((char*)&item[i],sizeof(item[i]));
	}
	file.close();
	file.open("STOCK.txt",ios::in);
	file.seekg(0);
	cout<<"\nOUTPUT\n\n";
	for(int i=0;i<3;i++){
		file.read((char*)&item[i],sizeof(item[i]));
		cout<<item[i].name<<" "<<item[i].code<<" "<<item[i].cost<<"\n";
	}
	file.close();
	return 0;
}
