#include<iostream>

using namespace std;

class shape
{
	protected:
		int width;
		int hight;
		public:
			void setwidth(int w)
			{
				width = w;
			}
			void sethight(int h)
			{
				hight = h;
			}
};

class rectangle: public shape
{
	public:
		int getArea()
		{
			return (width * hight);
		}
};

int main(void)
{
	int val1,val2;
	
	rectangle rect;
	
	cout<<"Enter width"<<endl;
	cin>>val1;
	
	cout<<"Enter Hight"<<endl;
	cin>>val2;
	
	rect.setwidth(val1);
	rect.sethight(val2);
	
	cout<<"Total area = "<<rect.getArea()<<endl;
}
