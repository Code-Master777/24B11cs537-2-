//destructor
#include <iostream>
using namespace std;

class D2
{
	int* data;
	public:
		
		D2(int value)
		{
		   data = new int;
		   *data = value;
		   cout << *data << endl;	
	    }
	
		~D2()
		{
			delete data;
			cout<<"DEstructor: Memory allocated ";
		}
		
	
};
int main()
{
	D2 t4(32);
	return 0;
}
