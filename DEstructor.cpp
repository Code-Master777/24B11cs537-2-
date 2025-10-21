//destructor
#include <iostream>
using namespace std;
int count = 0;
class test
{
	
	public:
		
		test()
		{
			count+=1;
			cout<<"Constructor called for obj "<<count<<endl;
		}
		~test()
		{
			cout<<"DEstructor called for obj "<<count<<endl;
			count-=1;
		}
		
	
};
int main()
{
	test t1,t2,t3,t4;
	return 0;
}

