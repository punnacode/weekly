#include <stdio.h>

int main()
{
	int Size, sum = 0;
	float avg = 0;

	printf("Please Enter the Array size = ");
	scanf("%d", &Size);

	int arr[100];

	printf("Enter the Array Elements : ");
	for (int i = 0; i < Size; i++)
	{
		scanf("%d", &arr[i]);
		sum = sum + arr[i];
	}

	avg = (float)sum / Size;

	printf("\nThe Sum of Array Elements     = %d\n", sum);
	printf("\nThe Average of Array Elements = %.2f\n", avg);
}
