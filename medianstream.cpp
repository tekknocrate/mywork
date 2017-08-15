#include<iostream>

using namespace std;

void sort(int*,int);
void median(int*,int);

void display(int *a,int len)
{
	cout<<"Dis:len"<<len<<endl;
	cout<<"Len:"<<len;
        for (int i=0;i<len;i++)
        {
                cout<<"A["<<i<<"]="<<a[i]<<endl;
        }
}



int main()

{
int n=0;int a[]={0};
cout<<"Enter the number of int in the stream:";
cin>>n;
int i=0;
while (i<n)
{
cout<<"sizeofArrayBefore:"<<a[0];
cout<<"Enter  element:";
cin>>a[i];
cout<<"A values "<<a[0]<<":"<<a[1]<<sizeof(a)<<endl;
int n=(sizeof(a)/sizeof(a[0]));
cout<<"size SUR0:"<<n<<"SIZE :"<<sizeof(a)<<endl;
display(a,n);
cout<<"size SUR1:"<<n<<endl;
sort(a,n);
display(a,n);
median(a,n);
i++;
}

}

void sort(int* a,int n)
{
	for (int i=0;i<n;i++)
	for (int j=0;j<j-i-1;j++)
	{
		if(a[i]>a[j+1])
		{
		int tmp = a[i];
		a[i]=a[j+1];
		a[j+1]=tmp;
		}
	}

}

void median(int* a,int n)
{
	int mid=0;
	if(n%2)
	{	
		mid=a[n/2];
		cout<<"Median is:"<<mid<<endl;	
	}
	else
	{
		if (n==1){mid=a[0];}
		else
		{
		mid=(a[n/2]+a[n-1/2])/2;
		cout<<"Median Even is"<<mid<<endl;
		}
	}



}
