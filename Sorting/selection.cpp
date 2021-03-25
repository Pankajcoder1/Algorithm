#include<iostream>
using namespace std;
void selection_sort(int *array,int size);
void print_array(int *array,int size);

int main()
{
	// time complexity of this alogo is big-oh(n^2)
	int size;
	cout<<"Enter size of array : ";
	cin>>size;
	int *array=new int[size];
	cout<<"Now enter all element of array : ";
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
	selection_sort(array,size);
	print_array(array,size);
}

void selection_sort(int *array,int size)
{
	int min=0;
	for(int i=0;i<size-1;i++)
	{
		min=i;
		// set supposed min here.
		for(int j=i+1;j<size;j++)
		{
			if(array[j]<array[min])
			{
				min=j;
			}
		}
		// now swap actual min with supossed min value in array.
		int temp;
		temp=array[min];
		array[min]=array[i];
		array[i]=temp;
	}
}

void print_array(int *array,int size)
{
	cout<<"Now element in array is : ";
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
}