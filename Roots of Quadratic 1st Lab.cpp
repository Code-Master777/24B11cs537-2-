#include <iostream>
#include <cmath>
using namespace std;
 int main(){
 	float a,b,c,r1,r2,d;
 	cout<<"Enter a,b,c "<<endl;
 	cin>>a>>b>>c;
 	
 	d = (b*b)-(4*a*c);
 	if(d==0){
 		r1 = r2 = -b/(2*a);
 		cout<<"roots are same and are  "<<r1<<" "<<r2;
 		
	 }else if(d>0){
	 	r1 = (-b-sqrt(d))/(2*a);
	 	r2 = (-b+sqrt(d))/(2*a);
	 	cout<<"roots are distinct and are  "<<r1<<" and "<<r2;
	 }else{
	 	int i;
	 	i = sqrt(-d);
	 	r1 = r2 = -b/(2*a);
	 	cout<<"Roots are complex:"<<endl;
	 	cout<<"root1 is "<<r1<<"+"<<i<<"i"<<endl;
		 cout<<"root2 is "<<r2<<"-"<<i<<"i"<<endl;
	 }
 	
 	return 0;
 }
