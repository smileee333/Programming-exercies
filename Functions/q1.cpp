#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void print(int*,int,int);
void read(int*,int,int);
void read(int*mat,int m,int n){
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cout<<"Enter value for ["<<i<<","<<j<<"]:";
			cin>>*mat;
			mat++;
		}
	}
};
void print(int*mat,int m,int n){
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
	read(Mat,m,n);
	cout<<"\n";
	print(Mat,m,n);
	return 0;
}
