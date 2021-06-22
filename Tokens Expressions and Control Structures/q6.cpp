 #include<iostream>
 using namespace std;
 struct player{
	char name[15];
	int run;
	int inn;
	int tno;
	int avg;
 };
 int main(){
 	struct player team[11];
 	for(int i=1;i<=11;i++){
 		int d;
 		do{
 			if(d==0)
 			cout<<"Entered no of inn and tno are incorrect! please re-enter player no:"<<i<<"details"<<"\n";
 			d=1;
 			cout<<"Enter name of player no "<<i<<" : ";
 			cin>>team[i-1].name;
 			cout<<"Enter total runs scored by player no "<<i<<" : ";
 			cin>>team[i-1].run;
 			cout<<"Enter total innings played by player no "<<i<<" : ";
 			cin>>team[i-1].inn;
 			cout<<"Enter total no of times player no "<<i<<"was not out"<<" : ";
 			cin>>team[i-1].tno;
 			cout<<"\n"<<"data has been recorded for player no: "<<i<<"\n"<<"\n";
			if(team[i-1].inn>=team[i-1].tno)
			d=0;	
			cout<<"\n"<<"data has been recorded for player no: "<<i<<"\n"<<"\n";
	 	}
	 	while(!(d)|| team[i-1].inn<0 || team[i-1].tno <0 || team[i-1].run<0);
	 }
	 for(int i=1;i<=11;i++){
	 	team[i-1].avg=team[i-1].run/team[i-1].inn;
	 }
	 for(int i=1;i<=11;i++){
	 	cout<<team[i-1].name<<" "<<team[i-1].run<<" "<<team[i-1].inn<<" "<<team[i-1].tno<<"\n";
	 }
	 return 0;
 }
