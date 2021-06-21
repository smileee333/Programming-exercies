#include<iostream>
#include<string>
using namespace std;
struct quali{
	int yrs_exp;
	string acad;
};
struct addrs{
	string Po_office;
	long pin_code;
	string disst;
	string state;
	long house_no;
};
class faculty{
	long ID;
	string name;
	string post;
	struct quali qualification;
	struct addrs address;
	public:
		void read(void);
		void display(void);
};
void faculty::read(void){
	cout<<"Enter name of faculty: ";
	cin>>name;
	cout<<"Enter ID of "<<name<<" : ";
	cin>>ID;
	cout<<"Enter post of "<<name<<" : ";
	cin>>post;
	cout<<"-------------------------------------------\n";
	cout<<"Enter "<<name<<"'s qualification:\n\n";
	cout<<"Enter years of experience of "<<name<<" : ";
	cin>>qualification.yrs_exp;
	cout<<"Enter academic qualification of "<<name<<" : ";
	cin>>qualification.acad;
	
	cout<<"-------------------------------------------\n";
	cout<<"Enter "<<name<<"'s address:\n\n";
	cout<<"Enter house no: ";
	cin>>address.house_no;
	cout<<"Enter Post office name: ";
	cin>>address.Po_office;
	cout<<"Enter disst name: ";
	cin>>address.disst;
	cout<<"Enter pin code: ";
	cin>>address.pin_code;
	cout<<"Enter state name: ";
	cin>>address.state;
}
void faculty::display(void){
	cout<<"------------------------------------------------------------\n";
	cout<<"Name of faculty: "<<name<<"\n";
	cout<<"ID: "<<ID<<"\n";
	cout<<"Post: "<<post<<"\n";
	cout<<"years of experience: "<<qualification.yrs_exp<<"\n";
	cout<<"academic qualification: "<<qualification.acad<<"\n";
	cout<<"Address:\n";
	cout<<"House no: "<<address.house_no<<"\n";
	cout<<"Post office: "<<address.Po_office<<"\n";
	cout<<"Disst. name: "<<address.disst<<"\n";
	cout<<"pin code: "<<address.pin_code<<"\n";
	cout<<"state name: "<<address.state<<"\n";
}
// main program
int main(){
	faculty Smile;
	Smile.read();
	Smile.display();
	return 0;
}
