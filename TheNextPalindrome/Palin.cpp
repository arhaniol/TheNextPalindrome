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
		if (number == "9") {
			return "11";
		}
		else
		{
			string sign = number.substr(0, len);
			sign[0]++;
			return sign;
		}
	}
	if (len % 2 == 0)
	{
		h1 = number.substr(0, half);
		h2 = h2r = number.substr(half, len);
		reverse(h2r.begin(), h2r.end());

		if (h1.compare(h2r) <= 0)
		{
			return increase(h1);
		}
		else if (h1.compare(h2r) > 0)
		{
			string h1r = h1;
			reverse(h1r.begin(), h1r.end());
			//h2 = h1;
			//reverse(h2.begin(), h2.end());
			if (h2.compare(h1r) > 0)
			{
				return increase(h1);
			}
			else
			{
				h2 = h1;
				reverse(h2.begin(), h2.end());
				return h1 += h2;
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
			return increase(h1, 1);
		}
		else if (h1.compare(h2r) > 0)
		{
			string h1r = h1;
			reverse(h1r.begin(), h1r.end());
			if (h2.compare(h1r) > 0)
			{
				h1 += mid;
				return increase(h1, 1);
			}
			else
			{
				h2 = h1;
				reverse(h2.begin(), h2.end());
				h1 += mid;
				return h1 += h2;
			}
		}
	}
}

string Palin::increase(string &h1, int mid)
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
		h2 = h1.substr(0, h1.length() - 1 - mid);
		reverse(h2.begin(), h2.end());
	}
	else
	{
		h2 = h1.substr(0, h1.length() - mid);
		reverse(h2.begin(), h2.end());
	}
	return h1 += h2;

}
