#include<stdio.h>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
long long result = 0;
int m = 1234567891, r = 31;

long long recursive(long long h, int r, int i)
{
	if (i == 0)
		return h;
	h *= r;
	h = h % m;
	return recursive(h, r, i - 1);
}
int main(void)
{
	long long h = 1;
	int l;
	char c;
	scanf("%d", &l);
	
	vector<int> v(l);
	for (int i = 0; i < l; i++)
	{
		scanf(" %c", &c);
		v[i] = c - 'a' + 1;
	}
	for (int i = 0; i < l; i++)
	{
		h = 1;
		h = recursive(h, r, i);
		result += (v[i] * h) % m;
	}
	printf("%lld", result%m);
}