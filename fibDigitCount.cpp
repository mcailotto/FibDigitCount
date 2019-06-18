#include <stdio.h>
#include <string>

using namespace std;
int fibDigits(int);
string addString(string a, string b);

int main()
{
	printf("%d\n", fibDigits(1000));
	
	return 0;
}

int fibDigits(int digits)
{
	int d, i;
	string p1("1"); 
	string p2("1");
	string temp = "";

	d = 1;
	i = 2;

	if(digits == 1)
		return 1;

	while(d < digits)
	{
		temp = addString(p1, p2);
		p1 = p2;
		p2 = temp;

		d = p2.length();
		i ++;
	}

	return i;
}

string addString(string a, string b)
{
	bool carry;
	string res = "";
	int i, x, y;

	i = 0;
	carry = false;
	while(i < a.length() && i < b.length())
	{
		x = a[i] - '0';
		y = b[i] - '0';
		x += y;
		x += carry;

		if(x >= 10)
		{
			x -= 10;
			carry = true;
		}
		else
			carry = false;

		res += x + '0';
		i ++;
	}
	
	while(i < a.length())
	{
		x = a[i] - '0';
		x += carry;

		if(x >= 10)
		{
			x -= 10;
			carry = true;
		}
		else
			carry = false;

		res += x + '0';
		i ++;
	}

	while(i < b.length())
	{
		y = b[i] - '0';
		y += carry;

		if(y >= 10)
		{
			y -= 10;
			carry = true;
		}
		else
			carry = false;

		res += y + '0';
		i ++;
	}

	if(carry)
		res += '1';

	return res;
}
