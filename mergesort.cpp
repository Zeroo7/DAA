#include <iostream>
using namespace std;



void merge(int arr[],int low,int mid,int high)
{
	
	int i=low;
	int j=mid+1;
	int k=low;
	int b[100];

	while((i<=mid) and (j<=high))
	{
		if(arr[i]<arr[j])
		{
			b[k]=arr[i];
			k++;
			i++;
		}
		else
{
			b[k]=arr[j];
			k++;
			j++;
}
}
	
	if(i>mid)
	{
		while(j<=high)
		{
			b[k]=arr[j];
			j++;
			k++;	
		}
	}
	else if(j>high)
	{
		while(i<=mid)
		{
			b[k]=arr[i];
			i++;
			k++;
		}
	}
	
	while(low<=high)	{
	
		arr[low]=b[low];
		low++;
	}
}



void mergesort(int arr[],int low, int high)

{
	int mid;	
	if(high>low)
	{
	
	 mid=(low+high)/2;

		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);

		merge(arr,low,mid,high);
	}
}





int main(void)
{

int n,arr[50],result;
cout<<"enter no. of elements in array :\n";
cin>>n;

cout<<"Input array :\n";

for (int i=0;i<n;i++)
{

	cin>>arr[i];

}

cout<<"Input array is : [ ";
for (int i=0;i<n;i++)
{

	cout<<arr[i]<<" ";

}

cout<<"]\n";

mergesort(arr,0,n-1);

cout<<"Sorted array is : [ ";

for (int p=0;p<n;p++)
{

	cout<<arr[p]<<" ";

}
cout<<"]\n";
return 0;

}
