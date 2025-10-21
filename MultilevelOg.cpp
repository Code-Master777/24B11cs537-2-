#include<iostream>
using namespace std;
class vehicle
{
	public:
		void g()
		{
			cout<<"Grandpa class"<<endl;
			
		}
};
class fourwheeler: public vehicle 
{
		public:
	void father(){
		cout<<"Father class"<<endl;
	}

};
class car: public fourwheeler
{
		public:
	void child(){
		cout<<"Children class"<<endl;
	}
};
class car2: public fourwheeler
{
		public:
	void child2(){
		cout<<"Children2 class"<<endl;
	}
};
int main()
{
	car b;
	car2 h;
	b.g();
	b.child();
	b.father();
	h.g();
	h.child2();
	h.father();
}

