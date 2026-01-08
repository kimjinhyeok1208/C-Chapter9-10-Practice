#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double getAverage(int scores[], int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += scores[i];
	}

	return sum / n;
}

int average_grade_main()
{
	int n;
	int scores[100];
	int avg;

	printf("학생 수를 입력하시오:");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("학생의 점수를 입력하시오:");
		scanf("%d", &scores[i]);
	}

	avg = getAverage(scores, n);

	printf("평균점수는 %d\n", avg);

	if (avg >= 90)
		printf("A학점");
	else if (avg >= 80)
		printf("B학점");
	else if (avg >= 70)
		printf("C학점");
	else if (avg >= 60)
		printf("D학점");
	else
		printf("F학점");

	return 0;
}