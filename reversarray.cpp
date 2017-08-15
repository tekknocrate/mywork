#include <iostream>

using namespace std;

void sort( int[],int);
void display (int [],int);
void inplace_reverse (int [],int);
void reverse(int* ,int * ,int);

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

cout<<"Going to Reverse & Display"<<endl;

inplace_reverse(a,len);
display(a,len);
cout<<"Going to Reverse & Display agian to Orig without in plcae "<<endl;

int res[]={0};
reverse(a,res,len);
display(res,len);

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

void inplace_reverse (int * x,int len)
{

	for (int i=0;i<len/2;i++)
	{
		int temp=x[i];
		x[i]=x[len-1];
		x[len-1]=temp;
		len--;
	}
}


 void reverse(int * a,int * res,int len)
{

		int k=0;
//for( int i=len-2;i>=0;i--)
//{
//	int m=i+1;
//
//	res[k]=a[m];
//	k++;
//}
	k=len-1;	
	for (int i=0;i<len;i++)
	{
		res[i]=a[k];
		k--;
	}

}
