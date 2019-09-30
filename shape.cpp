//Program on Multi-level Inheritance 
#include<iostream>
using namespace std;
class shape
{
	public:
			double x,y;
			void get_data(double x1,double y1=0)
			{
				x=(double) x1;
				y=(double) y1;
			}
			virtual void display_area()
			{
				cout<<"Area of circle:\t\t";
				cout<<3.14*x*x<<"Units";
			}
};
class triangle:public shape
{
	public:
		void display_area()
		{
			cout<<"Area of Triangle:\t";
			double area =(double) 0.5*x*y;
			cout<<area<<"sq.units"<<endl;
		}
};
class rectangle:public shape
{
	public:
		void display_area()
		{
			cout<<"Area of Rectangle:\t";
			double area = (double) x*y;
			cout<<area<<"sq.units"<<endl;
		}
};
class circle:public shape
{
	
};
int main()
{
	shape s;
	triangle t;
	shape *s1 = &t;
	s1->get_data(5,3);
	s1->display_area();
	rectangle r;
	shape *s2 = &r;
	s2->get_data(6,8);
	s2->display_area();
	circle c;
	shape *s3 = &c;
	s3->get_data(9);		//passing only radius and other is considered to be default argument
	s3->display_area();		
	return 0;
}
