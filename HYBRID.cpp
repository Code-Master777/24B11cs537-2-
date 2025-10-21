#include<iostream>
using namespace std;
class Vehicle
{
	public:
		Vehicle()
		{
			cout<<"This is a vehicle"<<endl;
		}
};
class Car: public Vehicle
{
	public:
		Car()
		{
			cout<<"This is a car"<<endl;
		}
};
class Sports
{
	public:
		Sports()
		{
			cout<<"SPorts category"<<endl;
		}
};
class Bmw: public Car, public Sports
{
	public:
	Bmw()
	{
		cout<<"BMw is a sports car"<<endl;
	}
};
int main()
{
	Bmw b;
	b.Car();
	b.Sports();
	b.Vehicle();
	b.Bmw();
	return 0;
}
