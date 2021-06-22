#include<iostream>
using namespace std;
inline int max(int p, int q, int r){	
	if(p>q&&p>r)
	return p;
	else if(q>p&&q>r)
	return q;
	else
	return r;	
}
int main(){
	int p,q,r;
	cout<<"Enter 3 numbers:";
	cin>>p>>q>>r;
	cout<<"maximum number is "<<max(p,q,r);
	return 0;
}
