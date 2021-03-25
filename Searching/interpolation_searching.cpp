#include<iostream>
#include<algorithm>
using namespace std;
int interpolation_serach(int *arr,int size,int element);

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
	position=interpolation_serach(arr,size,element);
	if(position==-1)
		cout<<"element not found in array \n";
	else
		cout<<"element found at "<<position+1<<"in array \n";
}

int interpolation_search(int *arr,int size,int element)
{
	int low=0;
	int high=size-1;
	while(low<=high && element>=arr[low] && element<=arr[high])
	{
		if(low==high)
		{
			if(arr[low]==element)
				return low;
			return -1;
		}
		int position=low+(((high - low)/(arr[high]-arr[low]))*(element - arr[low]));
		if(arr[position]==element)
			return position;
		if(arr[position]<element)
			low=position+1;
		else
			high=position-1;
	}
	return -1;
}
