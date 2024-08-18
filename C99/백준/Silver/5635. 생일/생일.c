#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n;
	int min[4] = { 1990 , 1, 1 , -1 }, max[4] = { 2010 , 1, 1, -1};
	char** name;
	int* d, * m, * y;

	scanf("%d", &n);

	//malloc
	name = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++)
	{
		name[i] = (char*)malloc(sizeof(char) * 16);
	}

	d = (int*)malloc(sizeof(int) * n);
	m = (int*)malloc(sizeof(int) * n);
	y = (int*)malloc(sizeof(int) * n);

	//scanf
	for (int i = 0; i < n; i++)
	{
		scanf(" %s %d %d %d", name[i], &d[i], &m[i], &y[i]);
		if (y[i] > min[0])
		{
			min[0] = y[i];
			min[1] = m[i];
			min[2] = d[i];
			min[3] = i;
		}
		else if (y[i] == min[0])
		{
			if (m[i] > min[1])
			{
				min[0] = y[i];
				min[1] = m[i];
				min[2] = d[i];
				min[3] = i;
			}
			else if (m[i] == min[1])
			{
				if (d[i] > min[2])
				{
					min[0] = y[i];
					min[1] = m[i];
					min[2] = d[i];
					min[3] = i;
				}
			}
		}

		if (y[i] < max[0])
		{
			max[0] = y[i];
			max[1] = m[i];
			max[2] = d[i];
			max[3] = i;
		}
		else if (y[i] == max[0])
		{
			if (m[i] < max[1])
			{
				max[0] = y[i];
				max[1] = m[i];
				max[2] = d[i];
				max[3] = i;
			}
			else if (m[i] == max[1])
			{
				if (d[i] < max[2])
				{
					max[0] = y[i];
					max[1] = m[i];
					max[2] = d[i];
					max[3] = i;
				}
			}
		}
	}

	printf("%s\n", name[min[3]]);
	printf("%s", name[max[3]]);

	//free
	for (int i = 0; i < n; i++)
	{
		free(name[i]);
	}
	free(name);
	free(d);
	free(m);
	free(y);
}