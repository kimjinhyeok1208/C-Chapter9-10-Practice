#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findMax(int arr[], int size)
{
	int max = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	return max;
}

int findMin(int arr[], int size)
{
	int min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	return min;
}

int max_min_main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		printf("%d번째 정수를 입력하시오:",i+1);
		scanf("%d", &arr[i]);
	}

	printf("최대값은 %d입니다.", findMax(arr, 10));
	printf("최소값은 %d입니다.", findMin(arr, 10));

	return 0;
}