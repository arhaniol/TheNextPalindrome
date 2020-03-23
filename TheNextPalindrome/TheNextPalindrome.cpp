// TheNextPalindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
//#include<bits/stdc++.h>
using namespace std;

string increase(string &h1, int onemore = 0);
int main()
{
	int lines = 0,
		i,
		len = 0,
		half = 0;
	cin >> lines;
	string number,
		h1,
		h2,
		h2r;
	char mid = NULL;
	for (i = 0; i < lines; i++)
	{
		cin >> number;
		len = number.length();
		half = len / 2;
		if (len == 1)
		{
			if (number == "9")
			{
				cout << "11";
			}
			else
			{
				string sign = number.substr(0, len);
				sign[0]++;
				cout << sign;
			}
		}
		else if (len % 2 == 0)
		{
			h1 = number.substr(0, half);
			h2 = h2r = number.substr(half, len);
			reverse(h2r.begin(), h2r.end());

			if (h1.compare(h2r) <= 0)
			{
				cout << increase(h1);
			}
			else if (h1.compare(h2r) > 0)
			{
				string h1r = h1;
				reverse(h1r.begin(), h1r.end());
				if (h2.compare(h1r) > 0)
				{
					cout << increase(h1);
				}
				else
				{
					h2 = h1;
					reverse(h2.begin(), h2.end());
					h1 += h2;
					cout << h1;
				}
			}
		}
		else
		{
			h1 = number.substr(0, half);
			h2 = h2r = number.substr(half + 1, len);
			reverse(h2r.begin(), h2r.end());
			mid = number[half];

			if (h1.compare(h2r) <= 0)
			{
				h1 += mid;
				cout << increase(h1, 1);
			}
			else if (h1.compare(h2r) > 0)
			{
				string h1r = h1;
				reverse(h1r.begin(), h1r.end());
				if (h2.compare(h1r) > 0)
				{
					h1 += mid;
					cout << increase(h1, 1);
				}
				else
				{
					h2 = h1;
					reverse(h2.begin(), h2.end());
					h1 += mid;
					h1 += h2;
					cout << h1;
				}
			}
		}
		cout << endl;
	}
	return 0;
}

string increase(string &h1, int onemore)
{
	string h2;

	for (int j = h1.length() - 1; j >= 0; j--)
	{
		if (h1[j] == '9')
		{
			h1[j] = '0';
		}
		else
		{
			h1[j]++;
			break;
		}
	}
	if (h1[0] == '0')
	{
		h1.insert(h1.begin(), '1');
		h2 = h1.substr(0, h1.length() - 1 - onemore);
		reverse(h2.begin(), h2.end());
	}
	else
	{
		h2 = h1.substr(0, h1.length() - onemore);
		reverse(h2.begin(), h2.end());
	}
	return h1 += h2;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
