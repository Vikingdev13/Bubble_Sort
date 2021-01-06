#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int size);
void printArr(int arr[], int size);
FILE *fp = NULL;

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error, Missing Arguments!\n");
		exit(1);
	}
	fp = fopen("input.txt", "r");
	
	int arr[20];
	int i;
	int size = sizeof(arr)/ sizeof(arr[0]);
	fscanf(fp, "%d", &size);
	for (i = 0; i < size; ++i)
	{
		fscanf(fp, "%d", &arr[i]);
	}
	
	bubbleSort(arr, size);
	fclose(fp);
	return 0;
}

void bubbleSort(int arr[], int size)
{
	
	int tmp, i, j;
	printf("\n** Before Sorting**\n");
	printf(" ");
	printArr(arr, size);
	printf("\n\n");
	printf("== Bubble Sort ==\n");

	for (i = 0; i < size - 1; ++i)
	{
		for (j = 0; j < size - 1 - i; ++j)
		{
			
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			printf(" ");
			printArr(arr, size-i);
			printf("\n");
		}
		
	}

	printf("\n== Sorting Completed ==\n\n");
	printf("** After Sorting**\n");
	printf(" ");
	for (i = 0; i < size; ++i)
	{
		printf("%3d ", arr[i]);
	}
	printf("\n");
}

void printArr(int arr[], int size)
{
	int i;

	fscanf(fp, "%d", &size);
	for (i = 0; i < size; ++i)
	{
		printf("%3d ", arr[i]);
	}
}