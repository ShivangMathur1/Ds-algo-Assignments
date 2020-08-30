//Bubble sort
#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

void print_sort_array(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[]={64,34,25,12,22,11,90};
	int n=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,n);
	print_sort_array(arr,n);
	return 0;
}
