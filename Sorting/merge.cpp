#include<iostream>
using namespace std;
void print_array(int *array,int size);
void selection(int *array,int *temp,int low,int high);
void merge_sort(int *array,int *tmep,int low,int mid,int high);

int main()
{
	int size;
	cout<<"Enter size of array : ";
	cin>>size;
	int *array = new int[size];
	int *temp=new int[size];
	cout<<"Now enter element of array : ";
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
	selection(array,temp,0,size-1);
	print_array(array,size);
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

void merge_sort(int *array,int *temp,int low,int mid,int high)
{
	
}

void selection(int *array,int *temp,int low,int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;
		selection(array,temp,low,mid);
		selection(array,temp,mid+1,high);
		merge_sort(array,temp,low,mid,high);
	}
}