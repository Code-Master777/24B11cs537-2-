#include<iostream>
using namespace std;
class Print
{
     public:
     void display(int i)
     {
     	cout<<"Integer:"<<i<<endl;
	 }
	 void display(double d)
     {
     	cout<<"Double:"<<d<<endl;
	 }
	 void display(string s)
     {
     	cout<<"String:"<<s<<endl;
	 }
};
int main()
{
	Print p;
	p.display(10);
	p.display(10.5);
	p.display("Hello");
	return 0;
}
