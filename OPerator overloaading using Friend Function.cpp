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
		friend Complex operator+(Complex c1, Complex c2);
		
		void display()
		{
			cout<< real << " + " << imag << "i" << endl;
		}
};

		Complex operator+(Complex c1, Complex c2) // Overload binary '+' operator
		{
			Complex temp;
			temp.real = c1.real + c2.real;
			temp.imag = c1.imag + c2.imag;
			return temp;
			
		}
		
	
		

int main()
{
	Complex a(3.5, 2.5);
	Complex b(1.6, 4.1);
	Complex c = a + b;
	
	cout << "First Complex Number: ";
	a.display();
	
	cout << "Second Complex Number: ";
	b.display();
	
	cout << "Sum: ";
	c.display();

	return 0;
}
