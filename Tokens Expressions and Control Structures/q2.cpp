#include<iostream>
using namespace std;
int main(){
	int M;
	cout<<"enter dimension size: ";
	cin>>M;
	cout<<"Vector generated successfully of size "<<M<<"\n";
	int*vector=new int[M];
	for(int i=1;i<=M;i++){
		vector[i]=i;
		cout<<vector[i]<<"\n";
	}
	cout<<"Vector generated successfully of size "<<M;
	return 0;
}
