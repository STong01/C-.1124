#include <iostream>
using namespace std;

//����ʮ����ת��Ϊ�����ƺ󣬶�������1�ĸ���
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