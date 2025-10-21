#include<iostream>
using namespace std;

	  int add()
         {
        	int a=1,b=2,c;
        	c =a+b;
        	return c;
         }
         int add(int a,int b)
          {
            	int c;
            	c =a+b;
				return c;
		  }
	   int add(int a,int b,int c)
			{
				int d= a+b+c;
				return d;
		   }

int main()
{
	
	cout<<add()<<endl;
	cout<<add(10,20)<<endl;
	cout<<add(10,20,30);
	return 0;
}
