#include <iostream>
using namespace std;

class Student
{
	public:
		int rollno,sum;
		Student(int r,int x)
		{
			rollno = r;
			sum = r+x;
			
		}
		Student(const Student &s)
		{
		   rollno = s.rollno;	
		   sum = s.sum;
		}
	void display()
	{
		cout<<"The roll no of student is : "<<rollno<<" and score is "<<sum<<endl;
	}
};
int main()
{
	Student s1(100,45);
	s1.display();
	Student s2 = s1;
	s2.display();
}
