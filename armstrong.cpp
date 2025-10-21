#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i,a,r=0,og,e=0;
	cout<<"Enter number"<<endl;
	cin>>n;
	og = n;
	while(n)
	{
	   	n /=10;
	   	e++;
	}
	n = og;
	while(n)
	{
		a += pow(n%10,e);
		n/=10;
	}
	a==og?cout<<"Armstrong":cout<<"not Armstrong";
	return 0;
}
