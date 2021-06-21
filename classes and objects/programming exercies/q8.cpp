#include<iostream>
#include<math.h>
using namespace std;
class account{
  long acc_no;
  double principle;
  float rate;
  float time;
  double SI;
  double CI;
  public:
  void read(void);
  void SI_cal(void);
  void CI_cal(void);
  friend int main();
  };
void account::read(void){
	cout<<"Enter acc_no: ";
	cin>>acc_no;
	cout<<"Enter principle amount: ";
	cin>>principle;
	cout<<"Enter rate: ";
	cin>>rate;
	cout<<"Enter time: ";
	cin>>time;
};
void account::SI_cal(void){
	SI= (principle*rate*time)/100;
};
void account::CI_cal(void){
	CI= principle*pow((1+rate/100),time);	
};
int main(){
	account my;
	my.read();
	account*acc=&my;
	double account::* si=&account::SI;
	double account::* ci=&account::CI;
	cout<<"SI is: "<<acc->*si<<"\n";
	cout<<"CI is: "<<acc->*ci<<"\n";
	return 0;
}
