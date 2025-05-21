#include<stdio.h>
#include<math.h>
void recursive(int n, int now, int goal)
{
	if (n == 1)
	{
		printf("%d %d\n", now, goal);
		return;
	}
	recursive(n - 1, now, 6 - goal - now);
	printf("%d %d\n", now, goal);
	recursive(n - 1, 6 - goal - now, goal);
	return;
}
int main(void)
{
	void recursive(int n, int now, int goal);

	int n;
	scanf("%d", &n);
	printf("%.0f\n", pow(2.0, double(n))-1);
	recursive(n, 1, 3);
}
