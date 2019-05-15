#include <iostream>
using namespace std;

int sort(int arr[50],int low,int high){


    int i=low+1;
    int j=high;
    int t;
    int p=arr[low];
    while(1)
    {
        while(arr[i]<p)
        {
        i++;
        }
        while(arr[j]>p)
        {
        j--;
        }
        
        if(i<j)
        {
        t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
        }
        else
        {
        t=arr[low];
        arr[low]=arr[j];
        arr[j]=t;
        return j;
        }
    }
}



void quicksort(int arr[50],int low,int high){
	
	if(low<high){
	int pi=sort(arr,low,high);
	quicksort(arr, low, pi - 1); 
        quicksort(arr, pi + 1, high); 	
	}
	}

int main(){

int  n;
int arr[]={4,1,5,2,35,6,6,7,89};
n=sizeof(arr)/sizeof(arr[0]);

quicksort(arr,0,n-1);

for(int i=0;i<n;i++)
{
	cout<<arr[i]<<"\n";
}

return 0;

}
