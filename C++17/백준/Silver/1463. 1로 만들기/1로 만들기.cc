#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	int n;
	scanf("%d", &n);

	vector<int> v(n + 1, 0);
	v[0] = 0;
	v[1] = 0;
	v[2] = 1;
	v[3] = 1;
	for(int i = 4; i <= n;i++)
	{
		v[i] = v[i - 1] + 1;
		if (i % 3 == 0 && v[i / 3] < v[i])
			v[i] = v[i / 3] + 1;
		if (i % 2 == 0 && v[i / 2] < v[i])
			v[i] = v[i / 2] + 1;
	}
	printf("%d", v[n]);
}