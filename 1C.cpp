#include<iostream>
#include<vector>
#include<list>
#include<time.h>


using namespace std;


int	main()
{
	srand(time(NULL));
	list<int> L1, L2, result;
	vector<int> A1, A2, result1;
	int range, temp1, temp2;
	bool Endtmp1 = false, Endtmp2 = false;
	bool EndA1tmp1 = false, EndA2tmp2 = false;
	cout << "Size of list is: ";
	cin >> range;

	for (int i = 0; i < range; i++)
	{
		temp1 = rand() % 100 + 1;
		temp2 = rand() % 100 + 1;
		A1.push_back(temp1);
		A2.push_back(temp2);
		L1.push_back(temp1);
		L2.push_back(temp2);
	}

	vector<int>::iterator A1tmp1, A2tmp2, rsl1;
	A1tmp1 = A1.begin();
	A2tmp2 = A2.begin();
	rsl1 = result1.begin();

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
				result1.push_back(*A1tmp1);
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
				result1.push_back(*A2tmp2);
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
				result1.push_back(*A1tmp1);
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
			result1.push_back(*A2tmp2);
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
			result1.push_back(*A1tmp1);
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
	for (rsl1 = result1.begin(); rsl1 != result1.end(); rsl1++)
	{
		cout << *rsl1 << " ";
	}
	cout << endl << endl;
	cout << "array size:" << result1.size() << endl;
	cout << "array capacity" << result1.capacity();
	cout << endl <<"-----------------------------------" << endl;

	list<int>::iterator tmp1, tmp2, rsl;
	tmp1 = L1.begin();
	tmp2 = L2.begin();
	rsl = result.begin();

	for (tmp1 = L1.begin(); tmp1 != L1.end(); tmp1++)
	{
		for (auto tmp11 = L1.begin(); tmp11 != L1.end(); tmp11++)
		{
			if (*tmp1 < *tmp11)
			{
				iter_swap(tmp1, tmp11);
			}
		}
	}

	for (tmp2 = L2.begin(); tmp2 != L2.end(); tmp2++)
	{
		for (auto tmp21 = L2.begin(); tmp21 != L2.end(); tmp21++)
		{
			if (*tmp2 < *tmp21)
			{
				iter_swap(tmp2, tmp21);
			}
		}
	}

	tmp1 = L1.begin();
	tmp2 = L2.begin();
	cout << endl << "L1 list is:" << endl;
	for (tmp1; tmp1 != L1.end(); tmp1++)
	{
		cout << *tmp1 << " ";
	}
	cout << endl << endl;
	cout << "L2 list is:" << endl;
	for (tmp2; tmp2 != L2.end(); tmp2++)
	{
		cout << *tmp2 << " ";
	}

	cout << endl << endl;
	cout << "Result list is:" << endl;



	tmp1 = L1.begin();
	tmp2 = L2.begin();
	while (tmp1 != L1.end() || tmp2 != L2.end())
	{
		if (Endtmp1 == false && Endtmp2 == false)
		{
			if (*tmp1 < *tmp2)
			{
				result.push_back(*tmp1);
				if (*tmp1 != L1.back())
				{
					tmp1++;
				}
				else
				{
					Endtmp1 = true;
				}

			}
			else if (*tmp1 > *tmp2)
			{
				result.push_back(*tmp2);
				if (*tmp2 != L2.back())
				{
					tmp2++;
				}
				else
				{
					Endtmp2 = true;
				}
			}
			else
			{
				result.push_back(*tmp1);
				if (*tmp1 != L1.back())
				{
					tmp1++;
				}
				else
				{
					Endtmp1 = true;
				}
				if (*tmp2 != L2.back())
				{
					tmp2++;
				}
				else
				{
					Endtmp2 = true;
				}
			}
		}
		if (Endtmp1 == true && Endtmp2 == true)
		{
			break;
		}
		if (Endtmp1 == true)
		{
			result.push_back(*tmp2);
			if (*tmp2 != L2.back())
			{
				tmp2++;
			}
			else
			{
				tmp2++;
				tmp1++;
			}
		}
		if (Endtmp2 == true)
		{
			result.push_back(*tmp1);
			if (*tmp1 != L1.back())
			{
				tmp1++;
			}
			else
			{
				tmp2++;
				tmp1++;
			}
		}

	}
	for (rsl = result.begin(); rsl != result.end(); rsl++)
	{
		cout << *rsl << " ";
	}
	cout << endl << endl;
	cout << "list size:" << result.size() << endl;
	cout << endl << "-----------------------------------" << endl;
}