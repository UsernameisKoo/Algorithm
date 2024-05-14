#include<stdio.h>
int main(void)
{
	int n,student[30],search,element=30;
	for (int i = 1; i <= 30; i++)
	{
		student[i - 1] = i;
	}
	for (int i = 1; i <= 28; i++)
	{
		scanf("%d", &n);
		search = n;
		for (int index = 0; index <element; index++)
		{
			if (student[index] == search)
			{ 
				for (int in = index; in < element-1; in++)
				{
					student[in] = student[in + 1];
				}
				element--;
			}
		
			
		}
	
	}
	for (int i = 0; i < element; i++)
		printf("%d\n", student[i]);
}