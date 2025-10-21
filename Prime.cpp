#include<iostream>
using namespace std;
int main()
{
	int n,i,f=0;
	cout<<"Enter number"<<endl;
	cin>>n;
	if(n==0||n==1)
	{
		cout<<"Not prime number"<<endl;
	}else
	{
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			f++;
		}
	}
	if(f>1){
		cout<<"Not prime number"<<endl;
	}
	else{
			cout<<"Prime number"<<endl;
	}
    }
	return 0;
}
