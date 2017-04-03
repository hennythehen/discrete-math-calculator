/*
Mar 31, 2017
numints.cpp
This program will calculate the number of integers between two numbers m and n
*/
#include <iostream>
#include <algorithm>
using namespace std;

int calculateNumInts( int , int );
int main()
{
	int m , n; //two integers of interest
	char choice;
	do
	{
		cout << "Pick two integers that you are interested in "
			 << "and I will tell you how many integers are between them."
			 << endl;

		cin >> m >> n;


		cout << "There are " << calculateNumInts(m , n) << " integers between "
			 << m << " and " << n << endl;
		cout << "Run program again?? enter 'y' for YES 'n' for NO." << endl;
		cin >> choice;
	}while (choice == 'y');
	cout << "Thank you for using our program!" << endl;
	return 0;
}

int calculateNumInts(int m , int n)
{
	int thismany;

	if ( m > n )
	{
		swap( m , n );
	}

	thismany = ( n - m + 1 );
	return thismany;
}

