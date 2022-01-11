#include<iostream>
#include<string.h>
using namespace std;
class circle 
{
	private:
		int radius;
	public:
		void getradius(int r)
		{
			radius=r;
		}
		void getarea()
		{
			float area=3.14*radius*radius;
			cout<<"the area of circle is "<<area;
		}
		void getcir()
		{
			float circ= 2*3.14*radius;
			cout<<"the circumference of circle is"<<circ;
		}
};
int main()
{
	circle c;
	int a;
	cout<<"enter the radius";
	cin>>a;
	c.getradius(a);
	c.getarea();
	c.getcir();
	return 0;
}
