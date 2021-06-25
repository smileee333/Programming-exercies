#include<iostream>
#include<string>
#include<math.h>
using namespace std;
// considerring rate to be constant in savings account;
class despo_CI{
	protected:
	float CI;
	float time;
};
const float rate=5;
class account{
	string cust_name;
	string acc_type;
	protected:
		long acc_no;
		double balance;
	public:
		void deposit(void);
		void display(void){
			cout<<"Balance in "<<acc_no<<" is "<<balance<<"\n";
		};
		void init_cust_name(void){
			cout<<"Enter customer name: ";
			cin>>cust_name;
		};
		void init_acc_no(void);
		void init_acc_type(void);
		void init_balance(void);
		
};
void account::init_balance(){
	double blnc;
	cout<<"Enter amount of money to initialize bank account no "<<acc_no<<" : ";
	cin>>blnc;
	balance=blnc;
};
void account::init_acc_no(){
	double n;
	do{
	cout<<"Enter account number: ";
	cin>>n;
		if(n>=0){
			acc_no=n;;
			break;
		}
		else
		cout<<"Enter a valid account number\n";
	}
	while(1);
};
void account::init_acc_type(){
	string s;
	int y;
	do{
	cout<<"Enter type of account(savings or current): ";
	cin>>s;
		if(s=="savings"||s=="current"){
			acc_type=s;;
			break;
		}
		else{
		cout<<"Enter a valid account type\n";
		cout<<"Do yo still want to initialize account type (1 for yes, 0 for no): ";
		cin>>y;
		if(y==0)
		break;
		}
	}
	while(1);
};
void account::deposit(){
	double d;
	do{
	cout<<"Enter amount to be deposited: ";
	cin>>d;
		if(d>0){
			balance+=d;
			cout<<"Balance has been updated\n";
			display();
			break;
		}
		else
		cout<<"Enter a valid amount\n";
	}
	while(1);
};

class savacc:public account,public despo_CI{
	public:
		void withd_acc(void);
		void comp_depo_CI(void);
};
void savacc::withd_acc(){
	double w;
	do{
	cout<<"Enter amount to be withdrawl: ";
	cin>>w;
		if(w>0){
			balance-=w;
			cout<<w<<" amount of money has been successfully withdrawled\n";
			break;
		}
		cout<<"Enter a valid withdrawl amount\n";
		int y;
		cout<<"Still want to continue withdrawl (1 for yes 0 for no): ";
		cin>>y;
		if(y==0)
		break;
	}
	while(1);
};
void savacc::comp_depo_CI(){
	float t;
	float CI;
	int y;
	cout<<"principle amount in account is: "<<balance<<"\n";
	cout<<"Enter no of years for which CI is to be computed: "<<t<<"\n";
	CI=balance*pow((1+rate/100),t);
	cout<<"CI on "<<balance<<" amount is "<<CI<<"\n";
	do{
		cout<<"Would you like to deposit CI (1 for yes and 0 for no): "<<y<<"\n";
		if(y==1){
			balance+=CI;
			despo_CI::CI=CI;
			despo_CI::time=t;
			break;
		}
		else if(y==0)
		break;
		else
		cout<<"Enter a valid choice again";
	}
	while(1);
	
};

class cur_acc:public account{
	double min_balance;
	double withd_fine;
	public:
		void min_balance_init(void);
		void withd_chkbk(void);
		void init_balance(void);
		void deposit(void);
		void withd_fine_init(){
			withd_fine=0;	
		};
};
void cur_acc::min_balance_init(){
	cout<<"Enter min balance: ";
	cin>>min_balance;	
};
void cur_acc::deposit(){
	double d;
	int y;
	do{
		cout<<"Enter amonut of money to be deposited : ";
		cin>>d;
		if(d>0){
			if(withd_fine!=0){
				cout<<d<<" amount of money has been deposited\n";
				cout<<withd_fine<<" amount of fine is imposed over "<<balance<<"\n";
				balance=balance+d-withd_fine;
				withd_fine=0;
				cout<<"Current balance is "<<balance<<"\n";	
				break;		
			}
			else{
				cout<<d<<" amount of money has been deposited successfully \n";
				balance+=d;
				cout<<"current balance is "<<balance<<"\n";
				break;
			}
		}
		else{
			cout<<"Enter a valid deposit amount\n";
			cout<<"Do you still want to deposit (1 for yes, 0 for no): ";
			cin>>y;
			if(y=0)
			break;
		}
	}
	while(1);
};
void cur_acc::init_balance(){
	double blnc;
	int y;
	do{
		cout<<"Enter amount of money to initialize bank account no "<<acc_no<<" : ";
		cin>>blnc;
		if(blnc<min_balance){
			cout<<"Sorry entered amount of money is less then minimum specified balance\n";
			cout<<"do you still want to initialize bank balance (1 for yes,0 for no): ";
			if(y=0)
				break;
		}
		else{
			balance=blnc;
			cout<<acc_no<<" is successfully initialized";
		}
	}
	while(1);
};
void cur_acc::withd_chkbk(void){
		float w_chkbk;
		int y;
		do{
			cout<<"Enter amount to be withdrawl from checkbook: ";
			cin>>w_chkbk;
			if(w_chkbk>0&&w_chkbk<balance-min_balance){
				balance-=w_chkbk;
				cout<<w_chkbk<< " amount of money is Successfully withdrawl";
				break;
			}
			else if(w_chkbk>0&&w_chkbk>balance-min_balance&&balance>=w_chkbk){
				cout<<w_chkbk-balance+min_balance<<" amount of fine would be imposed over you\n";
				cout<<"do you still want to withdraw (1 for yes,0 for no): ";
				cin>>y;
				if(y==0)
				break;
				withd_fine=w_chkbk-balance+min_balance;
				balance-=w_chkbk;
				cout<<w_chkbk<<" amount is successfully withdrawl\n";
				break;
			}
			else{
				cout<<w_chkbk<<" amount can't be withdrawled\n";
				cout<<"you can withdraw money in the range of [0,"<<balance<<") only\n";
				cout<<"Do you still want to withdrawl money (1 for yes, 0 for no): ";
				cin>>y;
				if(y==0)
				break;
			
			}	
		}
		while(1);
		
};
// main program

int main(){
	savacc smile;
	smile.init_cust_name();
	smile.init_acc_no();
	smile.init_acc_type();
	smile.init_balance();
	smile.display();
	return 0;
}



