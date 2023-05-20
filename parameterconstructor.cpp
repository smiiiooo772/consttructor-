#include<iostream>
using namespace std;
class Add
{
	private:
		int c;
	public:
		Add(int a, int b)
		{
			c=a+b;
			cout<<"the addition is: "<<c<<endl;
		}
};
int main()
{
	Add obj(10,20);
}
