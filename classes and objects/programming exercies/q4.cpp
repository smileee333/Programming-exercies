#include<iostream>
using namespace std;
class Vector{
	int*vector;
	int dim;
	public:
		void create(void);		
		void display(void);
	friend void add(Vector,Vector);
};
void Vector::create(void){
	cout<<"Enter the size of vector to be created: ";
	cin>>dim;
	vector=new int[dim];
	int*pt=vector;
	for(int i=0;i<dim;i++){
		cout<<"Enter value of element no: "<<i<" : ";
		cin>>*pt;
		pt++;
	}
	cout<<"A vector with size = "<<dim<<" has been created dynamically\n";
};
void Vector::display(){
	int*pt=vector;
	cout<<"Vector list is:"<<"\n"<<"( ";
	for(int i=0;i<dim-1;i++){
		cout<<*pt<<",";
		pt++;
	}
	cout<<*pt<<" )"<<"\n";
};

void add(Vector one,Vector two){
	if(one.dim==two.dim){
		cout<<"Resultant adding of given vectors is:\n ";
		cout<<"(";
	    int const *pt1=one.vector;
		int const *pt2=two.vector;
		for(int i=1;i<=one.dim-1;i++){
			cout<<*pt1+*pt2<<",";
			pt1++;
			pt2++;
		}
		cout<<*pt1+*pt2<<")\n";
	}
	else
	cout<<"Adding of given vectors is not possible because both vectors are of different sizes";
}

// main program
int main(){
	Vector one;// declaring a varible belonging to class vector
	Vector two;
	one.create();
	one.display();
	cout<<"---------------------------------------------------"<<"\n";
	two.create();
	two.display();
	cout<<"---------------------------------------------------"<<"\n";
	add(one,two);
	
	return 0;
}



