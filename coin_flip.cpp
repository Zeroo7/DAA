#include <iostream>
using namespace std;

int coin[] = {0,1,2,5},table[100],s[100];

void coinChanging(int A)
{
	int coin;
	for(int i = 1; i <= A; i++)
	{
		int min = 9999;
		for(int j = 1; j <=3; j++)
		{
			if (coin[j] <= i)
			{
				if (1+table[i - coin[j]] < min)
				{
					min = 1+table[i - coin[j]];
					coin = j;
				}
			}
		}
		table[i] = min;
		s[i] = coin;
	}
}

void print_result(int A)
{
	int a = A;
	while (a > 0)
	{
		cout<<"\nRs "<<coin[s[a]]<<" coin will be used";
		a = a - coin[s[a]];
	}
}

int main()
{
	int A;
	cout<<"\nEnter amount of change to be given back: ";
	cin>>A;
	table[0] = 0;
	s[0] = 0;
	coinChanging(A);
	print_result(A);
	cout<<"\n";
	return 0;
}
