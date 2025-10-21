#include<iostream>
using namespace std;
int main()
{
	int i,n,s=0;
	cout<<"Enter number";
	cin>>n;
	for(i=1;i<n;i++){
		if(n%i==0){
			s+=i;
		}
	}
	s==n?cout<<"Perfect":cout<<"Imperfect";
	return 0;
}
