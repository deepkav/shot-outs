/*
	C++ PROGRAM FOR adding two polar coordinate values
*/
#include <iostream>
#include <math.h>
using namespace std;
class polar
{
	public:
	float x,y,r,a;
	int angle;
	
		polar()
		{
			angle=0;
			x=0;
			y=0;
			a=0;
			r=0;
		}
		polar(float radius,float angle)
		{
			this->r=radius;
			this->a=angle;
			this->x=(float) r*cos(a);
			this->y =(float) r*sin(a);
		}
		friend polar operator +(polar p1,polar p2)
		{
			polar p(0,0);
			p.x= p1.x + p2.x;
			p.y= p1.y + p2.y;
			return p;
		}
};
int main()
{
	polar p1(1,90);
	polar p2(1,90);
	polar p(0,0);
	p = p1+p2;
	p.a = tan(p.y/p.x);
	p.r = sqrt((pow(p.x,2))+(pow(p.y,2)));
	cout<<"\n\nAddition Of Given Polar Co-ordinates is:";
	cout<<"("<<p.r<<","<<p.a<<")\n\n";
	return 0;
}
