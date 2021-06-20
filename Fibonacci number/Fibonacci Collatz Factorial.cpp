#include <iostream>


using namespace std;


void Fibonacci_Number(int chosen_lim)
{

	int fibonacci = 0;

	int buffer1 = 0;
	int buffer2 = 1;


	while (fibonacci <= chosen_lim)
	{
		
		if (fibonacci == 0)
		{
			fibonacci += 1;
		}
		else
		{
			fibonacci = buffer1 + buffer2; // pick two neighbor values 

			buffer1 = buffer2;
			buffer2 = fibonacci;
		}
		if (fibonacci >= chosen_lim)
		{
			break;
		}

		cout << fibonacci << " ";
	}
	
}
int Collatz_conjecture(int lim)
{

	int counter = 0;

	while (lim != 1)
	{

		if (lim == 1)
		{
			return -1;
		}
		if (lim % 2 == 0)
		{
			lim /= 2;

		}
		else
		{
			lim *= 3;
			lim++;
		}

		counter++;

	}

	return counter;

}
int Factorial(int fact)
{

	if (fact == 0)
	{
		return 0;
	}
	if (fact == 1)
	{
		return 1;
	}
	
	return fact * Factorial(fact - 1);
}


int main()
{

	int limit;

	cout << "Enter the limit for Fibonacci numbers:" << endl;
	cin >> limit;

	cout << "Fibonacci numbers: ";
	Fibonacci_Number(limit);



	cout << endl << "Enter the limit for Collatz Conjecture:" << endl;
	cin >> limit;

	cout << "Counted loops: " << Collatz_conjecture(limit);



	cout << endl << "Enter digit to find factorial : " << endl;
	cin >> limit;

	cout << "Factorial of " << limit << " is " << Factorial(limit);

	return 0;
}


