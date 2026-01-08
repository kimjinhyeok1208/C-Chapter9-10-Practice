#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverseArray(int arr[], int n)
{
	for (int i = n-1; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
}

int reverse_array_main()
{
	int n;
	int arr[100];
	printf("몇 개의 정수를 입력하시겠습니까?");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("%d번째 정수를 입력하시오:",i+1);
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	reverseArray(arr, n);

	return 0;
}