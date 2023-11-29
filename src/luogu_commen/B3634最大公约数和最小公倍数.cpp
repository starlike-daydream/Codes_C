#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, min, max, divide, divided, result1, result2, remain;
	cin >> a >> b;
	if (a > b)
	{
		a ^= b;
		b ^= a;
		a ^= b;
	}
	if (b % a == 0)
	{
		max = a;
	}
	else
	{
		for (divided = b, divide = a;;)
		{
			result1 = divided / divide;
			remain = divided - divide * result1;
			if (divided == divide * result1)
			{
				max = remain;
				break;
			}
			divided = divide / remain;
			remain = divide - remain * divided;
			if (divided % remain == 0)
			{
				max = remain;
				break;
			}
		}
	}
	cout << max;
	for (min = b; (min % a != 0 || min % b != 0) && min <= b * a; min++)
		;
	cout << max << " " << min;
	return 0;
}
// a:105 b:252
// 42 b%a
// 21 a%b%a
