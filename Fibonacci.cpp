#include<iostream>
using namespace std;

void Fibonacci(int n1, int n2, int i)
{
	int n3 = n1 + n2;
	cout << "F" << i << " =  " << n3 << endl;
	if (i < 15)
	{
		Fibonacci(n2, n3, i + 1);
	}
}

int main()
{

	cout << "Define F0 = 0." << endl;
	cout << "Define F1 = 1." << endl;
	int n1 = 0, n2 = 1;
	int i = 3;
	Fibonacci(n1, n2, i);
	return 0;
}