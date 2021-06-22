#include<iostream>
using namespace std;
int main(){
	char poll='y';
	int count[5]={0,0,0,0,0};
	int spball=0;
	// y for on state n for off state	
	while(poll=='y'){
		cout << "Enter polling status: ";
		cin>>poll;
		if(poll=='y'){
			cout<<"Enter your ballot choice: ";
			int vote;
			cin>>vote;
			switch(vote){
				case 1:
				count[0]++;
				break;
				case 2:
				count[1]++;
				break;
				case 3:
				count[2]++;
				break;
				case 4:
				count[3]++;
				break;
				case 5:
				count[4]++;
				break;
				default:
				spball++;	
			}
		}
	}
	for(int i=1;i<=5;i++){
		cout<<"No for votes for Candidate no "<<i<<" is "<<count[i-1]<<"\n";
	}
	cout<<"No of spoilt ballots is "<<spball;
	return 0;
}
