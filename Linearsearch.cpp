#include <iostream>
using namespace std;
int Linearsearch(int item,int data[],int n/*,loc*/)
{int k=0,loc=-1;
for (int k = 0; k < n; k++)
if(data[k]==item)
  {loc=k;
  return k;
  }
return loc;
 
}
int main()
{
int num,value;
cout<<"Enter number of elements:";
cin>>num;
int arr[num];
cout<<"Enter array elements:";
for(int i=1;i<=num;i++)
{
cin>>arr[i];
}
cout<<endl;
cout<<"-->Enter element to be searched:";
cin>>value;
cout<<"\n";
int result=Linearsearch(value,arr,num);
(result == -1) ? cout << "Element not found!!" : cout << "Element found at index: " << result;
return 0;

}
