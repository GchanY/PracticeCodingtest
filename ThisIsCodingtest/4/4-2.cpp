#include <iostream>
#include <string>
using namespace std;

int main()
{
	string n;
	string change = "12345678";
	int x = 0;
	int y = 0;
	int cnt = 0;
	char Type[8] = { 'a','b','c','d','e','f','g','f' };

	int dx[8] = { 2,2,1,1,-2,-2,-1,-1 };
	int dy[8] = { 1,-1,2,-2,1,-1,2,-2 };

	getline(cin, n);

	for (int w = 0; w < 8; w++)
	{
		if (n[0] == Type[w])
		{
			string r = to_string(w + 1);
			n.replace(0, 1, r);
			break;

		}
	}

	for (int i = 0; i < 8; i++)
	{
		x = n[0] + dx[i] - 48;
		y = n[1] + dy[i] - 48;

		if (x > 0 && x < 9 && y>0 && y < 9)
		{
			cnt = cnt + 1;
		}
	}

	cout << cnt;

}