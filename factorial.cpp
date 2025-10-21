#include<iostream>
using namespace std;
int main()
{
	
	int n,i,f=1;
	cout<<"Enter number"<<endl;
	cin>>n;
	for(i=1; i<=n;i++){
		f *= i;
	}
	cout<<"Factorial is "<<f;
}
