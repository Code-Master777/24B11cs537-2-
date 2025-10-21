#include<iostream>
using namespace std;
class student{
	int rollno;
	string name;
	public: void getdata(){
		cout<<"enter roll no and name:";
		cin>>rollno>>name;
	}
	void display()
	{
		cout<<"roll no:"<<rollno<<",Name:"<<name<<endl;
	}
	
};
int main(){
		student s[3];
		for(int i =0;i<3;i++){
			s[i].getdata();
		}
		cout<<"student details:"<<endl;
		for(int i=0;i<3;i++){
			s[i].display();
		}
		return 0;
		
	}
