#include<iostream>

using namespace std;

int summ=0;

void sum(int*,int*,int* , int);
void display(int*, int);

int main(){

int x[]={1,2,3,4,5};
int y[]={6,7,8,9,10};
int c[]={};

int len=sizeof(x)/sizeof(x[0]);
sum(x,y,c,len);

display(c,len);

cout<<"Sum of elememts of array is="<<summ<<endl;
}


void sum(int* a, int * b, int *c ,int len) 
{

for ( int i=0;i<len;i++)
	c[i]= a[i]+b[i];
}
	
void display(int *a,int len)
{
for (int i=0;i <len;i++)
{
	cout<<"C["<<i<<"]="<<a[i]<<endl;
}
}
