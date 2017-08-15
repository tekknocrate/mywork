#include<iostream>

using namespace std;

void merge(int*,int*,int*,int,int);

void sort(int*,int);

void display(int*,int);

int main()
{
	int a[]={5,4,3,2,1};
	int b[]={6,7,8,9,10};
	int c[]={0};

	int l=sizeof(a)/sizeof(a[0]);
	int m=sizeof(b)/sizeof(b[0]);

	merge(a,b,c,l,m);
	
	display(c,10);
}

void merge(int* a, int* b, int* c,int l,int m)
{
int ptra=0;int ptrb=0;int ptrc=0;
	sort(a,l);
	display(a,l);// 5,4,3,2,1
	sort(b,m);	//10,9,8,7,6
	display(b,m);

	while(ptra<l && ptrb<m)
	{	
		cout<<"a[ptra]="<<a[ptra]<<" b[ptrb]="<<b[ptrb]<<endl;
		if(a[ptra]>b[ptrb])
	//	if(5>9)
		{
			
			c[ptrc++]=a[ptra++];
			cout<<"inside IF "<<c[ptrc-1]<<endl;
		}
		else
		{
			c[ptrc++]=b[ptrb++];
			cout<<"inside ELSE "<<c[ptrc-1]<<endl;
		}
	}
	while (ptra<l)
	{
		c[ptrc++]=a[ptra++];
	}
	while (ptrb<m)
	{	
		c[ptrc++]=b[ptrb++];
	}
		
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

