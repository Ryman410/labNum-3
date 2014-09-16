#include <iostream>;
#include <string>;
using namespace std;

int main()
{
	const int AMOUNT = 5;
	string salsa[AMOUNT] = { "Mild", "Medium", "Sweet", "Hot", "Zesty" };
	int numJars[AMOUNT];
	int total = 0;
	int high = 0;
	int low = 0;

	for (int i = 0; i < AMOUNT; i++)
	{
		cout << "Enter number of jars sold of " << salsa[i] << ": ";
		cin >> numJars[i];
		cout << endl;
		cout << salsa[i] << ": " << numJars[i] << endl;
		cout << endl;

		if (numJars[i] < 0) {
			cout << "There is no such thing as negative salsa. Try again." << endl;
			i--;
		}

		total = total + numJars[i];

		if (numJars[i] > numJars[high])
		{
			high = i;
		}
		if (numJars[i] < numJars[low])
		{
			low = i;
		}
	}
	cout << "Total sales: " << total << " jars" << endl;
	cout << "Highest seller was " << salsa[high] << " at " << numJars[high] << " jars" << endl;
	cout << "Lowest seller was " << salsa[low] << " at " << numJars[low] << " jars" << endl;
	return 0;
}