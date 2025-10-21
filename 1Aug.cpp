#include<iostream>
using namespace std;
class student
{
	public:
		int rollno;
		student()
		{
			rollno=155;
		}
		student(int r)
		{
			rollno=r;
		}
		void show(){
		
		cout<<"The roll no is :"<<rollno<<endl;
	}
};
int main()
{
	student s,s1(205);
	s.show();
	s1.show();
	return 0;
	
	
}
