#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int i = 0, j = 0;

	while (i < 20)
	{
		cout << i << endl;

		while (j < 10)
		{
			cout << "\t" << j << endl;
			j++;
		}

		i++;
		j = 0;
	}

	return 0;
}