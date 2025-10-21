#include<iostream>
using namespace std;
class vehicle
{
	public:
		void g()
		{
			cout<<"Father class"<<endl;
			
		}
};
class fourwheeler: public vehicle 
{
		public:
	void father(){
		cout<<"Child1 class"<<endl;
	}

};
class car: public vehicle 
{
		public:
	void child(){
		cout<<"Child2 class"<<endl;
	}
};
int main()
{
	car b;
	fourwheeler c;
	b.g();
	b.child();
	c.g();
	c.father();

}
