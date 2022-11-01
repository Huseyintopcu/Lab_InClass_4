#include<iostream>
#include<list>
#include<time.h>

using namespace std;

template <typename t>
bool palindrome(list<t> &l) 
{
	bool same = true;
	auto tp = l.rbegin();
	for  (auto p=l.begin(); p != l.end(); p++)
	{
		if (*p == *tp)
		{
			tp++;
		}
		else
		{
			same = false;
			break;
		}
	}
	return same;
}

int main()
{
	int check=0;
	list<int> l;

	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(1);

	for (auto i = l.begin(); i != l.end(); i++)
	{
		cout << *i;
	}
	cout << endl;
	check=palindrome(l);
	if (check==1)
	{
		cout << "This list is a polindrome" << endl << endl;
	}
	else
	{
		cout << "This list is not a polindrome" << endl << endl;
	}
	cout << "----------------------------" << endl;

	list<string> s;
	
	s.push_back("M");
	s.push_back("A");
	s.push_back("D");
	s.push_back("A");
	s.push_back("M");
	for (auto i = s.begin(); i != s.end(); i++)
	{
		cout << *i;
	}
	cout << endl;
	check = palindrome(s);

	if (check == 1)
	{
		cout << "This list is a polindrome" << endl << endl;
	}
	else
	{
		cout << "This list is not a polindrome" << endl << endl;
	}

}
