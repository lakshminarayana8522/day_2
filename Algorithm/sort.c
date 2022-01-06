/**
 * This program will take array of integers from user. then it will find the median of the numbers and
 * sort the array in assending order upto the median and
 * sort the remaining elements in array after the median to end.
 *
 *
 * author	: Lakshmi Narayana S
 * email	: narayana8522@gmail.com
 * filename	: sort.c
 * date		: 6 Jan 2022
 * 
 * */

/*! include headers */
#include <stdio.h>	/*! required for printf() and scanf() */

/**
 *  this function will sort the array 
 *  param@ in : arr  -->address of an array
 *  param@ in : size  -->size of the array
 *  param@ in : median  -->median postion in the array 
 *
 *  */

void sort(int *arr,int size,int median)
{
	int i,j,temp;
	/*! sorting first half in assending order using bubble sort technique */
	for(i=0;i<median;i++)
	{
		for(j=0;j<median-i;j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}


		}
	}
	/*! sorting second half indecending order using bubble sort technique */
	for(i=0;i<size-median-1;i++)
	{
		for(j=median+1;j<size-1;j++)
		{
			if(arr[j] < arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

}

/*! main program starts */
int main()
{
	int n;	/*! hold the array length */
	printf("enter the sizeof the array: ");
	scanf("%d",&n);	/*! taking size of the array from the user */
	int arr[n],i;	/*! declaring the integer array of size n */
	printf("Enter the elements of an array: ");
	for(i=0;i<n;i++)		/*! taking the array elements from the user */
	{
		scanf("%d",&arr[i]);
	}

	printf("median: %d\n",n/2); 	/*! displaying the median to stdout */

	sort(arr,n,n/2);		/*! calling the sort function to sort the array */

	printf("After sorting: ");
	for(i=0;i<n;i++)		/*! displying sorted array to stdout */
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}

