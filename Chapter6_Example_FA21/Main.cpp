#include <iostream>

using namespace std;

int main()
{
	cout << "Calculate Fibonacci sequence to 5 digits.\n";

	bool test = true;
	int n_1 = 1, n_2 = 1;
	int n_3;

	cout << n_1 << endl << n_2 << endl;

	while (test)
	{
		n_3 = n_1 + n_2;
		cout << n_3 << endl;

		n_1 = n_2;
		n_2 = n_3;

		if (n_2 >= 100000)
			test = false;
	}

	return 0;
}