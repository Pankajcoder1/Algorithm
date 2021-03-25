#include<iostream>
using namespace std;
void print_array(int *array,int size);
void insertion_sort(int *array,int size);


int main()
{
	int size;
	cout<<"Enter size of array : ";
	cin>>size;
	cout<<"Now enter element of array : ";
	int *array = new int[size];
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
	insertion_sort(array,size);
	print_array(array,size);
}

void insertion_sort(int *array,int size)
{
	int temp,j;
	for(int i=1;i<size;i++)
	{
		j=i-1;
		temp=array[i];
		// search for correct position in array.
		while(j>=0 && array[j]>temp)
		{
			array[j+1]=array[j];
			j--;
		}
		// set correct position in array.
		array[j+1]=temp;
	}
}

void print_array(int *array,int size)
{
	cout<<"Now element  of array is : ";
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<"\n";
}