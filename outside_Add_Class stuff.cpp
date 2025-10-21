#include <iostream>
//OUTside
using namespace std;
class Demo
{
	public:
	void add();
};
void Demo::add()
{
	int a,b,c;
	cout<<"Enter a,b"<<endl;
	cin>>a>>b;
	c = a+b;
	cout<<c;
}

int main()
{
	Demo A;
	A.add();
	return 0;
}
