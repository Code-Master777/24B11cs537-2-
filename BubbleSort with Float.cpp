#include <iostream>
using namespace std;

template <typename T>
void bubbleSort (T arr[], int n)
{
	for(int i = 0; i<n-1; i++)
	{
		for (int j=0; j<n-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				//Swap elements
				T temp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
template <typename T>
void printArray(T arr[], int n)
{
	for(int i=0; i<n; i++)
	    cout<< arr[i] << "";
	    cout<<endl;
}
int main(){

	int n;
	cout<<"Enter number of elements: ";
	cin>>n;
//Example with float
float arrFloat[n];
cout<<"\nEnter"<<n<<"float elements: \n";
for(int i=0; i<n; i++)
   cin>>arrFloat[i];

cout<<"Original float array: ";
printArray(arrFloat, n);

bubbleSort(arrFloat, n);

cout<<"Sorted float array: ";
printArray(arrFloat, n);

return 0;
}
