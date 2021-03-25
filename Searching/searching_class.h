#include<iostream>
#include<algorithm>
using namespace std;

class searching_class
{
	// linear search
public:
		int linear_search(int *arr,int size,int element)
	{
		for(int i=0;i<size;i++)
		{
			if(arr[i]==element)
			{
				return i+1;
			}
		}
		return -1;
	}
	
	// interpolation search
	int interpolation_search(int *arr,int size,int element)
	{
		int low=0;
		int high=size-1;
		while(low<=high && element>=arr[low] && element<=arr[high])
		{
			if(low==high)
			{
				if(arr[low]==element)
					return low+1;
				return -1;
			}
			int position=low+(((high - low)/(arr[high]-arr[low]))*(element - arr[low]));
			if(arr[position]==element)
				return position+1;
			if(arr[position]<element)
				low=position+1;
			else
				high=position-1;
		}
		return -1;
	}

	// binary search
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
};