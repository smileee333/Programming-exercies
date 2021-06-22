#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void print(int*mat,int n,int m=2);
void read(int*mat,int n,int m=2);// default value of no of rows shall be 2 here
void read(int*mat,int n,int m){
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
int main(){
	int m,n;
	cout<<"Enter no of columns and rows: ";
	cin>>n>>m;
	int* Mat=(int*)malloc(sizeof(int)*m*n);
	read(Mat,n);
	cout<<"\n";
	print(Mat,n);
	return 0;
}
