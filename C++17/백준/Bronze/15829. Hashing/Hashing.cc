#include<stdio.h>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
long long h, result = 0;
int m = 1234567891, r = 31;
int main(void)
{
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
		h = pow(r, i);
		result += (v[i] * h) % m;
	}
	printf("%d", result);
}