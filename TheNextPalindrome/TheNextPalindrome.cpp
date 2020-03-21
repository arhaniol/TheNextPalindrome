// TheNextPalindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
//#include<bits/stdc++.h>
#include "Palin.h"
using namespace std;

int main()
{
	Palin palin;
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
		//cout << palin.findPalin(number);
		len = number.length();
		half = len / 2;
		if (len == 1)
		{
			cout<<"11";
		}
		else if (len % 2 == 0)
		{
			h1 = number.substr(0, half);
			h2 = h2r = number.substr(half, len);
			reverse(h2r.begin(), h2r.end());

			if (h1.compare(h2r) <= 0)
			{
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
					h2 = h1.substr(0, h1.length() - 1);
				}
				else
				{
					h2 = h1;
				}
			}
			else if (h1.compare(h2r) > 0)
			{
				h2 = h1;
			}
			reverse(h2.begin(), h2.end());
			cout << h1 << h2;
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
					h2 = h1.substr(0, h1.length() - 2);
				}
				else
				{
					h2 = h1.substr(0, h1.length() - 1);
				}
				reverse(h2.begin(), h2.end());
			}
			else if (h1.compare(h2r) > 0)
			{
				h2 = h1;
				reverse(h2.begin(), h2.end());
				h1 += mid;
			}
			cout << h1 << h2;
		}
		cout << endl;
	}
	return 0;
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
