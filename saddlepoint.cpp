//some valie A[i][j] is smallest in ith row andlargest in the jth column.
//

#include<iostream>

using namespace std;

bool IsSaddle(int [][3],int,int);

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
for (int i=0;i<3;i++)
{
        for (int j=0;j<3;j++)
        {
                cout<<" "<<mat[i][j];
                if(j== 2)
                cout<<endl;
        }

}


if(IsSaddle(mat,3,3))
	cout<<"saddle Point is present"<<endl;


}

bool IsSaddle(int a[][3],int l ,int m)
{
	for ( int i=0; i<l;i++)
	{
	int min=a[i][0];int col_ind=0;
	for (int j=1;j<m;j++)
	{
		if(min> a[i][j])
		{
			min=a[i][j];
			col_ind=j;
		}
	}
		int k=0;
		for (k=0;k<m;k++)
		{
			if(min<a[k][col_ind])
				break;
			
		}
	if (k==l)
	{
	cout<<"saddle point reached"<<min<<endl;
	return true;
	}	
	}
	return false;
}
