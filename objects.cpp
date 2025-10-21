#include<iostream>
using namespace std;
class B;
class A{
	public:
		A():a(2){};
		private:
		int a;
		friend int add(A,B);
};
class B{
	public:
		B():b(1){};
		private:
		int b;
		friend int add(A,B);

};
int add(A obj1,B obj2)
{
	return(obj1.a+obj2.b);
}
int main()
{
	A obj1;
	B obj2;
	cout<<"sum"<<add(obj1 , obj2);
}
