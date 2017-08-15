#include<iostream>

using namespace std;


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

