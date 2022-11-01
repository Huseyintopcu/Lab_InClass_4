#include<iostream>
#include<list>
#include<time.h>


using namespace std;


int main()
{
	srand(time(NULL));
	list<int> L1, L2,result;
	int range;
	bool Endtmp1 = false, Endtmp2 = false;
	cout << "Size of list is: ";
	cin >> range;
	

		
		for (int i = 0; i < range; i++)
	{
		L1.push_back(rand() % 100 + 1);
		L2.push_back(rand() % 100 + 1);
	}
	list<int>::iterator tmp1, tmp2,rsl;
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
		if (Endtmp1==false&&Endtmp2==false)
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
		if (Endtmp1 == true&& Endtmp2 == true)
		{
			break;
		}
		if (Endtmp1==true)
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
		if (Endtmp2==true)
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
	for (rsl=result.begin(); rsl != result.end(); rsl++)
	{
		cout << *rsl << " ";
	}

	cout << endl;
}