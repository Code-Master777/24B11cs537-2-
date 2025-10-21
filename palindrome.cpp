#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,rev=0,og;
	cout<<"Enter number"<<endl;
	cin>>n;
	og = n;
	while(n)
	{ 
		rev = (rev*10) + (n%10);
		n/=10;
	}
	rev==og?cout<<"Palindrome":cout<<"not palindrome";
	return 0;
}
