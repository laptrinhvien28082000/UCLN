#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n, m, i, j, k;
	cout << "Moi ban nhap so N\n";
	cin >> n;
	cout << "Moi ban nhap so M\n";
	cin >> m;
	for (i = n + 1; i < m; ++i)
	{
		k = 1;
		for (j = 2; j <= i / 2; ++j)
		{
			if (i % j == 0)
			{
				k = 0;
				break;
			}
		}
		if (k == 1)
			cout << i << "  ";
	}

	return 0;
}