#include<iostream>
#include<algorithm>
using namespace std;
int binary_search(int *arr,int size,int element);

int main()
{
	int size,element,position;
	cout<<"Enter size of array : ";
	cin>>size;
	int *arr=new int[size];
	cout<<"Enter all the element of array : ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"Now enter element to search : ";
	cin>>element;
	sort(arr,arr+size);
	position=binary_search(arr,size,element);
	if(position==-1)
		cout<<"element not found in array \n";
	else
		cout<<"element in array at "<<position<<"th place in array\n";

}

int binary_search(int *arr,int size,int element)
{
	int low=0;
	int high=size-1;
	while(high>=low && arr[low]<=element && arr[high]>=element)
	{
		if(low==high)
			{
				if(arr[low]==element)
					return low+1;
				return -1;
			}
			int position=(low+high)/2;
			if(arr[position]==element)
				return position+1;
			if(arr[position]<element)
				low=position+1;
			else
				high=position-1;
	}
	return -1;
}