#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int *ptr;
	int n, i;
	cout << "How many numbers do you want? " << endl
		 << "A: ";
	cin >> n;
	cout << n << "numbers" << endl;
	ptr = (int *)malloc(n * sizeof(int));
	if (ptr == NULL)
	{
		cout << "exit" << endl;
		_Exit(0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			ptr[i] = i + 1;
		}
		for (i = 0; i < n; i++)
		{
			cout << ptr[i] << endl;
		}
	}

	return 0;
}
