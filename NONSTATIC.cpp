#include<iostream>
using namespace std;
class A
{
	public:
		int s=10;
void  display()
{
      s+=1;	
	cout<<s<<endl;
}
};
int main()
{
	A ob1,ob2,ob3;
	ob1.display();
	ob2.display();
	ob3.display();
		ob1.display();
	return 0;
}
