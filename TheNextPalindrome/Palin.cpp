#include "Palin.h"
using namespace std;

string Palin::findPalin(string number)
{
	string h1, h2, h2r;
	int len = number.length();
	int half = len / 2;
	char mid = NULL;
	if (len == 1)
	{
		return "11";
	}
	if (len % 2 == 0)
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
				reverse(h2.begin(), h2.end());
			}
			else
			{
				h2 = h1;
				reverse(h2.begin(), h2.end());
			}
			return h1 += h2;
		}
		else if (h1.compare(h2r) > 0)
		{
			h2 = h1;
			reverse(h2.begin(), h2.end());
			return h1 += h2;
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
				reverse(h2.begin(), h2.end());
			}
			else
			{
				h2 = h1.substr(0, h1.length() - 1);
				reverse(h2.begin(), h2.end());
			}
			return h1 += h2;
		}
		else if (h1.compare(h2r) > 0)
		{
			h2 = h1;
			reverse(h2.begin(), h2.end());
			h1 += mid;
			return h1 += h2;
		}
	}
}
