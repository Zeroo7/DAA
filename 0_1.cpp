#include <iostream>
using namespace std;

struct Item{

	int cost;
	int w;
};


int fractionalKnapsack(int W,Item arr[],double p[50],int n){
	int totalp=0;
	for(int i=0;i<n;i++){
		
		
		if(arr[i].w<W){
			W-=arr[i].w;
			totalp+=arr[i].cost;
			}
		else{
			totalp+=p[i]*(W);
			
			}
			
		}
	return	totalp;

}


int main() 
{ 
    int W = 50;
    
    double p[50];   //    Weight of knapsack 
    Item arr[] = {{60, 10}, {100, 20}, {140, 30}};
    
    
   
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    for(int i=0;i<n;i++){
    
    p[i]=(double)arr[i].cost/arr[i].w;
    
    } 
      for(int i=0;i<n;i++){
    
    cout<<p[i]<<" ";
    
    }  
    
    cout << "Maximum value we can obtain = "<< fractionalKnapsack(W, arr,p, n); 
    return 0; 
} 
