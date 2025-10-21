#include<iostream>
using namespace std;
int main()
{
	int n,i,j,f=0;
	cout<<"Enter number"<<endl;
	cin>>n;
   for(j=1; j<=n; j++){
   	f =0;
   	   	for(i=1;i<j;i++)
		{
         	if(j%i==0)
	    	{
	     		f++;
	    	}
        }
    	if(f<=1){
    		cout<<" "<<j;
     	}
   }
   return 0;
}
