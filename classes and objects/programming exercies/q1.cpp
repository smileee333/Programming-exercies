#include<iostream>
#include<string>
using namespace std;
class account{
	string depositer_name;
	long int account_no;
	int account_type;
	double balance;
	public:
	 void initialize(long acc_no,int acc_type=1,double acc_balance=500);
	 void deposite(string,double);
	 void withdraw(void);
	 void display(){
		cout<<"Account no "<<account_no<<" belongs to "<<depositer_name<<" and current balance is "<<balance<<"\n";
	};
};
void account::initialize(long acc_no,int acc_type,double acc_balance){
	// "Enter Account no alloted to you in acc_no: ";
	account_no=acc_no;
	//<<"Notation for type of bank account are:"<<"\n"<<"Bank account  "<<"code used"<<"\n"<<"\n"
	//	<<"Demand deposit  "<<"1"<<"\n"
	//	<<"Term deposits   "<<"2"<<"\n"
	//	<<"Non Resident depostits  "<<"3"<<"\n"
	//	<<"\n"<<"Enter Appropriate code no for type of account tobe used in acc_type ";
	account_type=acc_type;
	balance=acc_balance;
	cout<<"Bank account with account no "<<acc_no<<" has been created with initial bank balance of "<<acc_balance<<"\n";
};
void account::deposite(string name,double amount){
	depositer_name=name;
	balance+=amount;
	cout<<name<<" has deposited amount of "<<amount<<" Rs into bank account no "<<account_no;
};
void account::withdraw(void){
	char d;
	double withdraw_cash;
	cout<<"\n"<<"Current balance in account no "<<account_no<<" is "<<balance<<"Rs\n";
	cout<<"Would you still like to withdraw ? (y for yes and n for no) ";
	cin>>d;
	if(d=='y'){
		cout<<"Enter amount to be withdrawl: ";
		cin>>withdraw_cash;
		if(withdraw_cash>balance||withdraw_cash<0){
			cout<<"Entered amount of money can't be withdrawl\n";
		}
		else{
			balance-=withdraw_cash;
			cout<<withdraw_cash<<" rs successfully withdrawled from account no "<<account_no<<"\n";
			cout<<"Current balance is "<<balance<<"\n";
		}
		
	}
	else{
		cout<<"No money is withdrawl from account no "<<account_no<<"\n";
		cout<<"Current balance is "<<balance<<"\n";
	}
};


// main program
int main(){
	account Smile;
	Smile.initialize(13213,1,1000);
	Smile.deposite("Smile Guleria",2000);
	Smile.withdraw();
	Smile.display();
	return 0;
}




