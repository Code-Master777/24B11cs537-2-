#include<iostream>
using namespace std;
class A
{
 	public:
		static int s;
static void  display()
{
      s+=1;	
	cout<<s<<endl;
}
};
int A::s=10;
int main()
{
	A ob1,ob2,ob3;
	ob1.display();
	ob2.display();
	ob3.display();
		ob1.display();
	return 0;
}
