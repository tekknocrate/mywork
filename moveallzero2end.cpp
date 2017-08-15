//Traverse the given array ‘arr’ from left to right. While traversing, maintain count of non-zero elements in array. Let the count be ‘count’. For every non-zero element arr[i], put the element at ‘arr[count]’ and increment ‘count’. After complete traversal, all non-zero elements have already been shifted to front end and ‘count’ is set as index of first 0. Now all we need to do is that run a loop which makes all elements zero from ‘count’ till end of the array.


#include<iostream>

using namespace std;

void movetoend(int*,int);

int main()
{
	int a[]={1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
	int n=sizeof(a)/sizeof(a[0]);
	movetoend(a,n);
	for( int i=0;i<n;i++)
	cout<<a[i]<<" "<<endl;
	
}


void movetoend(int* x, int n)
{
	int count=0;

	for (int i=0; i<n;i++)
	{
		if(x[i] != 0)
		{
			x[count++]=x[i];	
		}
	
	}
	while (count<n)
	{
		x[count++]=0;
	}
}


	



