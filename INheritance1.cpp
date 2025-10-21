#include <iostream>
using namespace std;
class animal
{
	public:
		
		void eat()
		{
			cout<<"eats daily"<<endl;
		}
		void sleep()
		{
			cout<<"sleeps daily"<<endl;
		}
};
class dog: public animal
{
	public:
		
		void bark()
		{
			cout<<"dogs bark!!!"<<endl;
		}
};
int main()
{
	animal a;
	 dog d;
	a.eat();
	a.sleep();
	d.bark();
	d.eat();
	return 0;
}
