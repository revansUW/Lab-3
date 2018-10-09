// Ryan Evans
// Lab 3

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

void sum_integers(long n)
{
	long sum = 0;
	for (long i = 1; i <= n; i++)
	{
		sum += i;
	}
	cout << "n = " << n << endl
		<< "sum of integers from 1 to n = " << sum << endl << endl;
}

void fac_integers(long n)
{
	double product = 1;
	if (n == 0)
	{
		product = 0;
	}
	else 
	{
		for (long i = 1; i <= n; i++)
		{
			product *= i;
		}
	}
	cout << "n = " << n << endl
		<< "factorial of n! = " << product << endl << endl;
}

void inv_integersum(double n)
{
	double sum = 1;
	if (n == 0)
	{
		sum = 0;
	}
	else
	{
		sum = 1 / n;
		for (double i = 1; i <= n; i++)
		{
			sum += 1/n;
		}
	}
	cout << "n = " << n << endl
		<< "the ratio 1/n added together n times = " << sum << endl << endl;
}


int main()
{
	/*
	long n = 0;
	cout << "enter an integer 'n' to sum to: " << endl;
	cin >> n;
	sum_integers(n);
	
	
	long n1 = 0;
	cout << "enter an integer 'n' for factorial n!: " << endl;
	cin >> n1;
	fac_integers(n1);
	
	
	float n2 = 0;
	cout << "enter an integer 'n' for the ratio 1/n: " << endl;
	cin >> n2;
	inv_integersum(n2);
	*/

	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}


	system("pause");
	return 0;
}

