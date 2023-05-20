#include<iostream>
using namespace std;
class A
{
	private:
		int x,y;
	public:
		A(int a, int b)
		{
			x=a;
			y=b;
			cout<<x<<endl<<y;
		}
	A(A &ref)
	{
		x=ref.x;
		y=ref.y;
		cout<<ref.x<<endl<<ref.y;
	}
};
int main() 
{
	A obj(10,20);
	A obj1=obj;
	return 0;
}
