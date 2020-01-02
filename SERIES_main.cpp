//updated
#include <iostream>
using namespace std;


double Series(int n);

int main ()
{
	int n; 

	cout << "Enter n: " ;
	cin >> n ;

	cout << "Series(" << n << ") is : " << Series(n) << endl; 

	return 0; 
}

double Series(int n)
{
	if (n == 1)
		return 2.0/5; 
	else 
	{
		double nthTerm = (2.0*n)/(3*n + 2);
		return nthTerm + Series(n-1);
	}
}
