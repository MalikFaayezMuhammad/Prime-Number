#include<iostream>
using namespace std;
int main()
{
	int x;
	int array1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		int j = 1;
		while (j <= array1[i])
		{
			if (array1[i] % j == 0)
			{
				x++;
			}
			j++;
		}

		if (x == 2)
		{
			cout << array1[i] << ":Prime Number\n";
		}
		else
		{
			cout << array1[i] << ":Not a Prime Number\n";
		}
		x = 0;
	}

	return 0;
}