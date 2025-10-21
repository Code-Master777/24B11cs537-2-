#include <iostream>
using namespace std;
class Complex
{
	float real;
	float imag;
	public:
		Complex(float r = 0.0, float i = 0.0)
		{
			real = r;
			imag = i;
		}
		Complex operator+(const Complex& c) // Overload binary '+' operator
		{
			Complex temp;
			temp.real = real + c.real;
			temp.imag = imag + c.imag;
			return temp;
			
		}
		void display()
		{
			cout<< real << " + " << imag << "i" << endl;
		}
		
};
int main()
{
	Complex c1(3.5, 2.5);
	Complex c2(1.6, 4.1);
	Complex c3 = c1 + c2;
	
	cout << "First Complex Number: ";
	c1.display();
	
	cout << "Second Complex Number: ";
	c2.display();
	
	cout << "Sum: ";
	c3.display();

	return 0;
}
