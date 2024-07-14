#include<stdio.h>
#include<math.h>
int main(void)
{

	int cnt = 0, count = 0;
	int index, num = 0;
	scanf("%d", &index);

	
	for (int i = 666;; i++)
	{
		
		int temp = i;

		if (num == index)
		{
			printf("%d", i - 1);
			break;
		}
			

		while (temp != 0)
		{
			cnt++;
			temp /= 10;
		}
		while (cnt > 0)
		{
			if ((i % (int)pow(10, cnt) - i % (int)pow(10, cnt - 1)) / (int)pow(10, cnt - 1) == 6)
			{
				count++;
				cnt--;
			}
			else
			{
				count = 0;
				cnt--;
			}
			if (count == 3)
			{
				num++;
			}
		}
		cnt = 0;
		count = 0;
	}
	
}