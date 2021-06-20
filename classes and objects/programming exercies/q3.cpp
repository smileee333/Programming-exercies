#include<iostream>
#include<string>
using namespace std;
const int size=10;
class account{
	string depositer_name;
	long int account_no;
	int account_type;
	double balance;
	public:
	 void initialize(long acc_no,int acc_type=1,double acc_balance=500);
	 void deposite(string,double);
	 void withdraw(void);
	 void display(void){
		cout<<"Account no "<<account_no<<" belongs to "<<depositer_name<<" and current balance is "<<balance<<"\n";
	};
	friend void deposite_all(account*Customer);
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
	cout<<name<<" has deposited amount of "<<amount<<" Rs into bank account no "<<account_no<<"\n";
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
void initialize_all(account*Customer);
void initialize_all(account*Customer){
	cout<<"Account type for demand deposite= 1\nAccount type for fixed deposite= 2\nAccount type for foreign residential deposite= 3\n"; 
	cout<<"---------------------------------------------------\n"<<"\n";
	for(int i=0;i<size;i++){
		long acc_no;
		int acc_type;
		double acc_balance;
		do{
			cout<<"Enter account no,account type and initial balance for customer no: "<<i+1<<" : ";
			cin>>acc_no>>acc_type>>acc_balance;
			if(acc_type==1||acc_type==2||acc_type==3){
				Customer->initialize(acc_no,acc_type,acc_balance);
				cout<<"Account of customer no "<<i+1<<" is successfully initialized\n";
				Customer++;
				break;
			}
			else
			cout<<"Enter a valid choice for account type\n";
		}
		while(!(acc_type==1||acc_type==2||acc_type==3));
	}
	
};
void deposite_all(account*Customer);
void deposite_all(account*Customer){
	cout<<"----------------------------------------------"<<"\n"<<"\n";
	
	for(int i=0;i<size;i++){
		string name;
		double amount;
		cout<<"Enter name of depositer for account no: "<<Customer->account_no<<" : ";
		cin>>name;
		cout<<"Enter amount to be deposited: ";
		cin>>amount;
		Customer->deposite(name,amount);
		Customer++;
	}

};
void withdraw_all(account*Customer);
void withdraw_all(account*Customer){
	for(int i=0;i<size;i++){
		
		Customer->withdraw();
		Customer++;
	
	}
};
void display_all(account * Customer);
void display_all(account * Customer){
		for(int i=0;i<size;i++){
		
		Customer->display();
		Customer++;
	
	}
}
// main program
int main(){
	account Customer[size];
	initialize_all(&Customer[0]);
//	Smile.initialize(13213,1,1000);
	deposite_all(&Customer[0]);	
//	Smile.deposite("Smile Guleria",2000);
	withdraw_all(&Customer[0]);
//	Smile.withdraw();
	display_all(&Customer[0]);
//	Smile.display();
	return 0;
}




