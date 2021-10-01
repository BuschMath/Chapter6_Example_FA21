#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char inChar;
	ifstream inFile;

	inFile.open("C:/Users/busch/OneDrive - Iowa Central Community College/Classes/FA17/C++/Presentations/Ch6Examples/SentinelInputData.dat");

	if (!inFile)
	{
		cout << "File failed to open!\n";
		return 1;
	}

	inFile.get(inChar);
	while (inChar != '\n')
	{
		cout << inChar << endl;
		inFile.get(inChar);
	}
	cout << endl;

	return 0;
}