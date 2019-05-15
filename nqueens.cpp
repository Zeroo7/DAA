#include <iostream>
#include <cstdlib>
using namespace std;



int arr[100];
int n;

void printres() 
{ 
    for (int i = 1; i <= n; i++) 
    { 
        for (int j = 1; j <= n; j++)
        {
        if(arr[i]==j) 
            printf(" %d ", 1);
        else
        	printf(" - ");
        }	 
        printf("\n"); 
    } 
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
} 


int canplace(int col, int row){

	
	for(int i=1;i<=row-1;i++){
	
	if(col==arr[i])
		return 0;
	
	if(abs(row-i)==abs(col-arr[i]))
		return 0;
		
	
	}

	return 1;

}


void nqueen(int row,int n){


for(int col=1;col<=n;col++){


	if(canplace(col,row)){
	
		arr[row]=col;
	
	if(row==n){
			
		printres();
	
	}
	else{
	
	nqueen(row+1,n);
	
	}

}


}
}

int main()
{	
	cout<<"Enter N number of queens :";
	cin>>n;
	nqueen(1,n);

	return 0;
}



/*

OUTPUT :
Enter N number of queens :4

 -  1  -  - 
 -  -  -  1 
 1  -  -  - 
 -  -  1  - 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 -  -  1  - 
 1  -  -  - 
 -  -  -  1 
 -  1  -  - 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Time complexity :

T(n) = n*T(n-1) + O(n^2)

so it is O(N!)



