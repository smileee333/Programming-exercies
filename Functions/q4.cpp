#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
// prototype declarations
void print(int*,int,int);
void print(int*,int);
void read(int*,int,int);
void read(int*,int);
// defination of fuctions
void read(int*mat,int n,int m){
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cout<<"Enter value for ["<<i<<","<<j<<"]:";
			cin>>*mat;
			mat++;
		}
	}
};
void read(int*mat,int n){
	int m=2;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cout<<"Enter value for ["<<i<<","<<j<<"]:";
			cin>>*mat;
			mat++;
		}
	}
};
void print(int*mat,int n,int m){
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
		cout<<*mat<<"  ";
		mat++;
		}
		cout<<"\n";
	}
};
void print(int*mat,int n){
	int m=2;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
		cout<<*mat<<"  ";
		mat++;
		}
		cout<<"\n";
	}
};
int main(){
	int m,n;
	cout<<"Enter no of rows and columns: ";
	cin>>m>>n;
	int* Mat=(int*)malloc(sizeof(int)*m*n);
	read(Mat,n,m);
	cout<<"\n";
	print(Mat,n,m);
	cout<<"\n";
	//now to illustrate overloading 
	cout<<"----------------------------------------"<<"Now to illustrate overloading"<<"\n";
	read(Mat,n);
	cout<<"\n";
	print(Mat,n);
	return 0;
}
