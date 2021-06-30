#include<iostream>
const long double pi=3.14158;
using namespace std;
class shape{
	public:
		double d1,d2;
		void get_data(double x,double y=0);
		virtual void display_area()=0;
};
void shape::get_data(double x,double y){
	d1=x;
	d2=y;
	cout<<"Data members are successfully initialized\n";
};
class triangle:public shape{
	public:
	void display_area(){
		cout<<"Area of triangle is "<<0.5*d1*d2<<"\n";
	};
};
class rectangle:public shape{
	public:
	void display_area(){
		cout<<"Area of rectangle is "<<d1*d2<<"\n";
	};
};
class circle:public shape{
	public:
	void display_area(){
		cout<<"Area of circle is "<<pi*d1*d1<<"\n";
	}
};
// main program
int main(){
	double x,y;
	shape* ptr;
	// for triangle
	triangle t;
	ptr=&t;
	cout<<"Enter dimentions of triangle (base and height respectively): ";
	cin>>x>>y;
	ptr->get_data(x,y);
	ptr->display_area();
	cout<<"----------------------------------------------------------------------------------------\n\n";
	// for rectangle
	rectangle r;
	ptr=&r;
	cout<<"Enter dimensions of rectangle ( length and width respectively): ";
	cin>>x>>y;
	ptr->get_data(x,y);
	ptr->display_area();
	cout<<"----------------------------------------------------------------------------------------\n\n";
	// for circle
	circle c;
	ptr=&c;
	cout<<"Enter dimensions of circle (radius): ";
	cin>>x;
	ptr->get_data(x);
	ptr->display_area();	
	
	
	return 0;
	
}
