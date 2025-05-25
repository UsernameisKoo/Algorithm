#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;
int main(void)
{
	int n, k, num, cnt = 0;
	vector<int> coin;
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		coin.push_back(num);
	}
	for (int i = n-1; i >=0; i--) {
		if (coin[i] > k)
			continue;
		else
		{
			cnt += k / coin[i];
			k %= coin[i];
			if (k == 0)
				break;
		}
	}
	printf("%d", cnt);
}