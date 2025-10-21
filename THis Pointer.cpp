//Demonstration of "this" pointer
#include <iostream>
using namespace std;

class Test {
	int x;
	public:
		Test (int x) // local variable is x, arg is also x so , "this" pointer will be used
		{
			this->x = x; //Resolving ambiguity
		}
	    void show() { cout<< "Value of x: " << this->x<<endl; }
		
};
int main()
{
	Test t(50);
	t.show();
	
	return 0;
}
		 
