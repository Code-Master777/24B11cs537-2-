#include<iostream>
using namespace std;
int main()
{
	int num,rem=0,rev=0;
	cout<<"enyter the value"<<endl;
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	cout<<rev;
}

