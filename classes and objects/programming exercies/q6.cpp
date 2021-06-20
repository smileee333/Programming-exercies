#include<iostream>
#include<stdlib.h>
using namespace std;
class Matrix{
	int*matrix;
	int i,j;
	public:
		void create(void);
		void display(void);
	friend Matrix mul(Matrix,Matrix);
		
};
void Matrix::create(void){
	cout<<"Enter no of rows and columns: ";
	cin>>i>>j;
	matrix=(int*)malloc(sizeof(int)*i*j);
	int*pt=matrix;
	for(int p=1;p<=i;p++){
		for(int q=1;q<=j;q++){
			cout<<"Enter value of "<<"["<<p<<","<<q<<"]"<<" : ";
			cin>>*pt;
			pt++;
		}
	}
	cout<<"Matrix is successfully created\n";
	cout<<"------------------------------------------------\n"<<"\n";
};
void Matrix::display(void){
	int*pt=matrix;
	cout<<"Matrix is: \n";
	for(int p=1;p<=i;p++){
		for(int q=1;q<=j;q++){
			cout<<*pt<<"  ";
			pt++;
		}
		cout<<"\n";
	}
	cout<<"------------------------------------------------\n"<<"\n";
	
};
Matrix mul(Matrix one,Matrix two){
	if(one.j==two.i){
		Matrix multi;
		multi.i=one.i;
		multi.j=two.j;
		multi.matrix=(int*)malloc(sizeof(int)*multi.i*multi.j);
		int*pt1=one.matrix;
		int*pt2=two.matrix;
		int*pt3=multi.matrix;
		
		for(int p=1;p<=multi.i;p++){
			for(int q=1;q<=multi.j;q++){
			int z=0;
				for(int r=1;r<=one.j;r++){
					z=z+(*pt1)*(*pt2);
					pt1++;
					pt2=pt2+two.j;
				}
			*pt3=z;
			pt3++; // for next iteration
			// reseting values
			pt2=two.matrix+q;
			pt1=one.matrix+one.j*(p-1);			
			}
			// reseting values
			pt1=one.matrix+one.j*p;
			pt2=two.matrix;
		}
		return multi;
		
		
		
	}	
	else
	cout<<"Multiplication is not feasable because (no of columns of 1st matrix) != (no of rows of 2nd matrix)";
};
// main program
int main(){
	Matrix one;
	Matrix two;
	one.create();
	one.display();
	two.create();
	two.display();
	Matrix multi=mul(one,two);
	multi.display();
}
