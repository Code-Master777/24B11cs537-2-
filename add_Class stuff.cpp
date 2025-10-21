#include <iostream>
//INside
using namespace std;
class Demo
{
	public:
void  add()
{
	int a,b,c;
	cout<<"Enter a,b"<<endl;
	cin>>a>>b;
	c = a+b;
	cout<<c;
}
};
int main()
{
	Demo A;
	A.add();
	return 0;
}
