#include<iostream>

using namespace std;

void transpose(int [][3],int ,int);

int main()
{

int mat[3][3]={0};

for (int i=0;i<3;i++)
{
	for (int j=0;j<3;j++)
	{
	cout<<"Enter Values for Matrix:"<<endl;
	cin>>mat[i][j];
	}
}
	cout<<"Matrix is:"<<mat[0][2]<<endl;


transpose(mat,3,3);

for (int i=0;i<3;i++)
{
	for (int j=0;j<3;j++)
	{
		cout<<" "<<mat[i][j];
		if(j== 2)
		cout<<endl;
	} 

}
}

void transpose(int a[][3],int l,int m)
{
for (int i=0;i<l;i++)
{
        for (int j=i+1;j<m;j++)
	{
	int temp=a[i][j];
	a[i][j]=a[j][i];
	a[j][i]=temp;
		
	}


}
}

