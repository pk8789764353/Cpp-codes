#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],mul[10][10],i,j,k,r1,r2,c1,c2;
    cout<<"Enter the number of row of first matrix:"<<endl;
    cin>>r1;
     cout<<"Enter the number of column of first matrix:"<<endl;
    cin>>c1;
    cout<<"Enter the number of row of second matrix:"<<endl;
    cin>>r2;    
    cout<<"Enter the number of column of second matrix:"<<endl;
    cin>>c2;
    if(c1==r2)
    {
        cout<<"Enter the elements of first matrix"<<endl;
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cin>>a[i][j];
            }
        }
         cout<<"Enter the elements of second matrix"<<endl;
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cin>>b[i][j];
            }
        }
        cout<<"Multiplied matrix = "<<endl;
        for ( i = 0; i < r1; i++)
        {
           for ( j = 0; j < c2; j++)
           {
            mul[i][j]=0;
            for ( k = 0; k < r2; k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
            cout<<mul[i][j]<<"\t";
           }
           cout<<endl;
        }        
    }
    else
    cout<<"Column of first matrix is not equal to row of second matrix.Matrix multiplication is not possible."<<endl;
    return 0;
    
}