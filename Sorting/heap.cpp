#include<iostream>
using namespace std;
void print_array(int *array,int size);
void swap(int *array,int i,int max);
void heapify(int *array,int size,int i);
void heap_sort(int *array,int size);

int main()
{
	int size;
	cout<<"Enter size of array : ";
	cin>>size;
	cout<<"Now enter element of array : ";
	int *array=new int[size];
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
	heap_sort(array,size);
	print_array(array,size);
}

void heapify(int *array,int size,int i)
{
	int left=2*i+1;
	int right=2*i+2;
	int max=i;
	if(left < size && array[max]<array[left])
	{
		max=left;
	}
	if(right < size && array[max]<array[right])
	{
		max=right;
	}
	if(max!=i)
	{
		swap(array,i,max);
		heapify(array,size,max);
	}
}

void print_array(int *array,int size)
{
	cout<<"Now element of array is : ";
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<"\n";
}

void swap(int *array,int i,int max)
{
	int temp=array[i];
	array[i]=array[max];
	array[max]=temp;
}

void heap_sort(int *array,int size)
{
	for(int i=size/2-1;i>=0;i--)
	{
		heapify(array,size,i);
	}
	for(int i=size-1;i>=0;i--)
	{
		swap(array,0,i);
		heapify(array,i,0);
	}
}