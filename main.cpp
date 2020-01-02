//updated
#include <iostream>
using namespace std;

int gcd (int m, int n);


int main()
{
	int m, n; 
	cout << "Enter m: " ;
	cin >> m ;
	cout << "Enter n: " ;
	cin >> n ;

	cout << "GCD is: " << gcd(m,n) << endl; 

	return 0;
}


int gcd (int m, int n) 
{
	if (m <= 0 || n <= 0)  // invalid input
		return 0; 
	else if (m % n == 0)  // m is divisible by n
		return n;
	else 
		return gcd(n, m % n); 
}
