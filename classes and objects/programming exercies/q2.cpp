#include<iostream>
using namespace std;
class vector{
	int*vector;
	int dim;
	public:
		void create(void);
		void modify(void);
		void multiply(void);		
		void display(void);
};
void vector::create(void){
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
void vector::modify(void){
	int idx;
	int value;
	cout<<"Enter the index no to be modified: ";
	cin>>idx;
	cout<<"Enter the value by which element is to be replaced: ";
	cin>>value;
	int*pt;
	pt=vector;
	if(idx>=0&&idx<dim){
	for(int i=0;i<idx;i++){
		pt++;
	}
	*pt=value;
	cout<<"Value of the element is successfully modified\n";	
	}
	else
	cout<<"Entered index no does not exist for created vector\n";
};
void vector::multiply(void){
	int scalar;
	cout<<"Enter scaler value with which vector is to be multiplied: ";
	cin>>scalar;
	int*pt=vector;
	for(int i=0;i<dim;i++){
		*pt*=scalar;
		pt++;
	}
	cout<<"Vector has been updated with multiplied scalar value= "<<scalar<<"\n";
};
void vector::display(){
	int*pt=vector;
	cout<<"Vector list is:"<<"\n"<<"( ";
	for(int i=0;i<dim-1;i++){
		cout<<*pt<<",";
		pt++;
	}
	cout<<*pt<<" )"<<"\n";
};

// main program
int main(){
	vector Smile;// declaring a varible belonging to class vector
	Smile.create();
	Smile.display();
	cout<<"---------------------------------------------------"<<"\n";
	Smile.modify();
	Smile.display();
	cout<<"---------------------------------------------------"<<"\n";
	Smile.multiply();
	Smile.display();
	cout<<"---------------------------------------------------"<<"\n";
	return 0;
}



