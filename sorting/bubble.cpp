#include<iostream>
using namespace std;
void print_array(int *arr,int size);

int main()
{
	int size,temp;
	cout<<"Enter size of array :";
	cin>>size;
	int *arr=new int[size];
	cout<<"Enter element :";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	// now code for swapping.
	// time complexity is big-oh(n^2)
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	print_array(arr,size);
}

void print_array(int *arr,int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}