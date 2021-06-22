#include<iostream>
using namespace std;
void swap(int&,int&);
void swap(int&x,int&y){
	auto int temp=y;
	y=x;
	x=temp;
	cout<<"values have been swapped"<<"\n";
}
int main(){
	int p,q;
	p=4;
	q=2;
	cout<<"initial values are:"<<p<<","<<q<<"\n";
	swap(p,q);
	cout<<"swapped values are: "<<p<<","<<q;
	return 0;
}
