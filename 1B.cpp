#include<iostream>
#include<vector>
#include<time.h>


using namespace std;


int main()
{
	srand(time(NULL));
	vector<int> A1, A2, result;
	int range;
	bool EndA1tmp1 = false, EndA2tmp2 = false;
	cout << "Size of list is: ";
	cin >> range;



	for (int i = 0; i < range; i++)
	{
		A1.push_back(rand() % 100 + 1);
		A2.push_back(rand() % 100 + 1);
	}
	vector<int>::iterator A1tmp1, A2tmp2, rsl1;
	A1tmp1 = A1.begin();
	A2tmp2 = A2.begin();
	rsl1 = result.begin();

	for (A1tmp1 = A1.begin(); A1tmp1 != A1.end(); A1tmp1++)
	{
		for (auto A1tmp11 = A1.begin(); A1tmp11 != A1.end(); A1tmp11++)
		{
			if (*A1tmp1 < *A1tmp11)
			{
				iter_swap(A1tmp1, A1tmp11);
			}
		}
	}

	for (A2tmp2 = A2.begin(); A2tmp2 != A2.end(); A2tmp2++)
	{
		for (auto A2tmp21 = A2.begin(); A2tmp21 != A2.end(); A2tmp21++)
		{
			if (*A2tmp2 < *A2tmp21)
			{
				iter_swap(A2tmp2, A2tmp21);
			}
		}
	}

	A1tmp1 = A1.begin();
	A2tmp2 = A2.begin();
	cout << endl << "A1 array is:" << endl;
	for (A1tmp1; A1tmp1 != A1.end(); A1tmp1++)
	{
		cout << *A1tmp1 << " ";
	}
	cout << endl << endl;
	cout << "A2 array is:" << endl;
	for (A2tmp2; A2tmp2 != A2.end(); A2tmp2++)
	{
		cout << *A2tmp2 << " ";
	}

	cout << endl << endl;
	cout << "Result array is:" << endl;



	A1tmp1 = A1.begin();
	A2tmp2 = A2.begin();
	while (A1tmp1 != A1.end() || A2tmp2 != A2.end())
	{
		if (EndA1tmp1 == false && EndA2tmp2 == false)
		{
			if (*A1tmp1 < *A2tmp2)
			{
				result.push_back(*A1tmp1);
				if (*A1tmp1 != A1.back())
				{
					A1tmp1++;
				}
				else
				{
					EndA1tmp1 = true;
				}

			}
			else if (*A1tmp1 > *A2tmp2)
			{
				result.push_back(*A2tmp2);
				if (*A2tmp2 != A2.back())
				{
					A2tmp2++;
				}
				else
				{
					EndA2tmp2 = true;
				}
			}
			else
			{
				result.push_back(*A1tmp1);
				if (*A1tmp1 != A1.back())
				{
					A1tmp1++;
				}
				else
				{
					EndA1tmp1 = true;
				}
				if (*A2tmp2 != A2.back())
				{
					A2tmp2++;
				}
				else
				{
					EndA2tmp2 = true;
				}
			}
		}
		if (EndA1tmp1 == true && EndA2tmp2 == true)
		{
			break;
		}
		if (EndA1tmp1 == true)
		{
			result.push_back(*A2tmp2);
			if (*A2tmp2 != A2.back())
			{
				A2tmp2++;
			}
			else
			{
				A2tmp2++;
				A1tmp1++;
			}
		}
		if (EndA2tmp2 == true)
		{
			result.push_back(*A1tmp1);
			if (*A1tmp1 != A1.back())
			{
				A1tmp1++;
			}
			else
			{
				A2tmp2++;
				A1tmp1++;
			}
		}

	}
	for (rsl1 = result.begin(); rsl1 != result.end(); rsl1++)
	{
		cout << *rsl1 << " ";
	}

	cout << endl;
}