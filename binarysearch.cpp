#include <iostream>

using namespace std;

int binarysearch(int arr[],int low,int high,int x)
{	
	int mid;
	
	if(high>=low)
	{
		mid=(low+high)/2;
		//cout<<mid;
		if(arr[mid]==x)
			return mid+1;
	
		else if(arr[mid]>x)
			return binarysearch(arr,low,mid-1,x);
	
		else
			return binarysearch(arr,mid+1,high,x);
	}

		return -1;
}



int main(void)
{

int arr[50];
int n,x,result;

cout<<"enter length of arr";
cin>>n;
cout<<"enter arr"<<endl;
for (int i=0;i<n;i++)
{
	cin>>arr[i];

}


cout<<"enter the no. to find"<<endl;
cin>>x;
cout<<endl;
result = binarysearch(arr,0,n-1,x);

	if (result == -1)
		cout<<"NOt found"<<endl;
	else
		cout<<"Found in the index"<<result<<endl;
return 0;

}
