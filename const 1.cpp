#include<iostream>
using namespace std;
class Add
{
	private:
		int a,b,c;
	public:
		Add()
		{
			cout<<"enter your both integers:"<<endl;
			cin>>a>>b;
			c=a+b;
			cout<<"addition is: "<<c<<endl;
		}
};
int main()
{
	Add obj;
	return 0;
}
