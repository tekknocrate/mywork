#include <iostream>

using namespace std;

void sort( int[],int);
void display (int [],int);

int main(){

cout<<"Enter the array values"<<endl;

int a[5]={};

for (int i=0;i<5;i++)
{
	cout<<"Enter Next value:"<<endl;
	cin>>a[i];
}

 int len=sizeof(a)/sizeof(a[0]);

cout<<"Lenghth of Array is "<<len<<endl;
cout<<"Display Before Sort"<<endl;
 display(a,len);


 sort(a,len);

cout<<"Display after Sort"<<endl;
 display(a,len);

return 0;
}


void sort(int x [],int len)
{
for (int i=0;i<len;i++)
{
	for (int j=0;j<len-i-1;j++)
	{
	if (x[j]<x[j+1])
	{
		int temp=x[j];
		x[j]=x[j+1];
		x[j+1]=temp;
	}
	}
}
}


void display(int x[],int len)
{
	for (int i=0;i<len;i++)
	{
		cout<<"A["<<i<<"]="<<x[i]<<endl;
	}
}

