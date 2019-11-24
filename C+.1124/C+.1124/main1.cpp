#include <iostream>
using namespace std;

//计算十进制转换为二进制后，二进制中1的个数
int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0;
		while (n)
		{
			if ((n & 1) == 1)
			{
				count += 1;
				n >>= 1;
			}
			else
				n >>= 1;
		}
		cout << count << endl;
	}

	system("pause");
	return 0;
}