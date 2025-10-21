#include<iostream>
using namespace std;
int x = 150;
void test();
int main(){
	int x=100;
   	
	test();
	return 0;
}
    void test(){
		int x= 50;
		cout<<x<<endl;
		cout<<::x;
	}
