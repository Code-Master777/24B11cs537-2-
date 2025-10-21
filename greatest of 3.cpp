#include<iostream>
using namespace std;
int main()
{
	int a,b,c,x;
	cout<<"2 or 3 numbers? ";
	cin>>x;
	if(x==2)
	{
	  	cout<<"Enter a,b ";
      	cin>>a>>b;
      	(a>b)?cout<<"a is greater":cout<<"b is greater";
	}else{
	
	cout<<"Enter a,b,c ";
	cin>>a>>b>>c;
	(a>b&&a>c)?cout<<"a is greatest":((b>c&&b>a)?cout<<"b is the greatest":cout<<"c is the greatest");
   }
	return 0;
}
