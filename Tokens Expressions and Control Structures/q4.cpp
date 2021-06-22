#include<iostream>
#include<math.h>
using namespace std;
int main(){
	for(float P=1000;P<=10000;P+=1000){
		for(float r=0.10;r<=0.20;r+=0.01){
			for(float n=1;n<=10;n++){
				cout<<P<<" "<<r<<" "<<n<<" "<<"-"<<" "<<pow(P*(1+r),n)<<"\n";
			}
		}
	}
	return 0;
}
