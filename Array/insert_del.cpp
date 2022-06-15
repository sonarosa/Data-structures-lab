#include<iostream>
using namespace std;
void insertEle(int data[],int size,int k,int item)
{
int j=size;
while(j>=k)
 {
    data[j+1]=data[j];
    j=j-1;
    
 }
 data[k]=item;
size=size+1;
 cout<<"Array after insertion of "<<item<<" \n";
 for(int p=0;p<size;p++)
 {
    cout<<data[p]<<" ";
 }
}
void delEle(int data[],int size,int k)
{
int item;
item=data[k];
for(int i=k;i<size-1;i++)
 {data[i]=data[i+1];

 }
 size=size-1;
 cout<<"Array after deletion of "<<item<<" :\n";
 for(int p=0;p<size;p++)
 {
    cout<<data[p]<<" ";
 }
}
int main()
{int n,pos;
cout<<"Enter the size of array:";
cin>>n;
int arr[n], i, elem;
int ans;
cout<<"Enter  Array Elements: ";
for(i=0; i<n; i++)
{cin>>arr[i];
}
do{
cout<<"Choose an array operation from the following:\n";
cout<<"1.Insert an element to the array\n";
cout<<"2.Delete an element from the array\n";
cout<<"Enter your choice\n";

cin>>ans;
switch(ans){
case 1:{
        cout<<"\nEnter Element to Insert: ";
        cin>>elem;
        cout<<"Enter the position where element to be inserted:";
        cin>>pos;
        insertEle(arr,n,pos,elem);
        cout<<endl;
        break;
       
    }
    case 2:
    { 
        cout<<"Enter the position where element to be deleted:";
        cin>>pos;
        delEle(arr,n,pos);
        cout<<endl;
        break;
       
    }
   default:
   {cout<<"Wrong option!!\n";
   }
}
}while(ans!=2);
return 0;
}
