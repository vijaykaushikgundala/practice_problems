// To Find the minimun and maximum value in an array.A function that takes array and length as input and updates min and max variables.
#include<stdio.h>
int minmax(int *Arr, int len, int min, int max)
{
	if (Arr == NULL || len < 0)
	{
		return -1;    // for error cases
	}
	int i, minvalue =10000;maxvalue=0;
	for (i = 0; i < len; i++)
	{
		if (Arr[i] < minvalue)
		{
			minvalue = Arr[i];
		}
		if (Arr[i]>maxvalue)
		{
			maxvalue = Arr[i];
		}
	}
	min = minvalue;
	max = maxvalue;
	return 0;
}