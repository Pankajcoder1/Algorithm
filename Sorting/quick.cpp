#include<iostream>
using namespace std;
void quick_sort(int *array,int l,int u);
void swap(int *array,int i,int j);
void print_array(int *array,int size);

void quick_sort(int *array,int l,int u)
{
	if(u>l)
	{
		// here we set mid as pivot point
		int pivot=(l+u)/2;
		int low=l;
		int high=u-1;
		// save pivot element
		int pivot_element=array[pivot];
		swap(array,pivot,u);
		while(high>=low)
		{
			while(array[low]<pivot_element)
			{
				low++;
			}
			while(array[high]>pivot_element)
			{
				high--;
			}
			if(high>low)
			{
				swap(array,high,low);
			}
		}
		swap(array,u,low);
		quick_sort(array,l,low-1);
		quick_sort(array,low+1,u);
	}
}

void swap(int *array,int i,int j)
{
	int temp;
	temp=array[i];
	array[i]=array[j];
	array[j]=temp;
}

void print_array(int *array,int size)
{
	cout<<"Now array look like : ";
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int size;
	cout<<"Enter size of array : ";
	cin>>size;
	int *array = new int[size];
	cout<<"Now enter element of array : ";
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
	quick_sort(array,0,size-1);
	print_array(array,size);
}