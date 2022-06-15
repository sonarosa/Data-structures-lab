#include<iostream>
using namespace std;
void magic_square(int arr[],int n)
{int rowsum=0,colsum=0,fir_dia=0,sec_dia=0;
  for(i=0;i<n;i++)
   {for(j=0,j<n;j++)
    {
     rowsum+=arr[i][j];
     colsum+=arr[j][i];
     if(i==j)
      {
       fir_dia+=arr[i][j];
      }
    }
   }
 for(int i=0;i<n;i++)
  {for(int j=n-1;j>=0;j++)
   {sec_dia+=arr[i][j];
   }
  }
}
