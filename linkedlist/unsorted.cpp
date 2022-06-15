#include <iostream>
using namespace std;
class node
{
public:
  int info;
  node *link;

};
class linked_list
{
  node *head, *ptr;
public:
    linked_list ()
  {
   head=NULL;
   ptr=NULL;
  }
  void add_node (int n)
  {
    node *tmp = new node;
    tmp->info = n;
    tmp->link = NULL;

    if (head == NULL)
      {
	head = tmp;
	ptr = tmp;
      }
    else
      {
	ptr->link = tmp;
	ptr = ptr->link;
      }
  }

 void search_item(int item)
  {int found;
    node *ptr = head;
    node *loc;
    
    while (ptr != NULL)
    {
        if(item>ptr->info)
        {      
            ptr = ptr->link;
            
            break;
        }
        else if(item==ptr->info)
        {      
           
            //found++;
            loc=ptr;
            break;
            cout<<"\t-->"<<item<<" is found at index  "<<loc<<".\n";
            
        }
        else if(item<ptr->info)
        {
         //found=0;
         loc=NULL;
         
         break;
         cout<<"\t-->"<<item<<" is not found in the list.\n";
            
        }
        
	}
     
   
   /* if (found == 1) {
      cout<<"\t-->"<<item<<" is found at index  "<<loc<<".\n";
    } 
    else{
     cout<<"\t-->"<<item<<" is not found in the list.\n";
    }*/
      
      
  } 
};

int main ()
{
  node *head = NULL;
  linked_list ln;
  int n,item;
  cout << "Enter number of elements:\n";
  cin >> n;
  cout << "Enter elements in the linked list in sorted manner:" << endl;
  for (int i = 0; i < n; i++)
    {
      //Taking the input

      int ele;
      cin >> ele;
      ln.add_node (ele);

    }
    cout<<"Enter element to be found\n";
    cin>>item;
  //cout << "Elements in Linked List:\n" ;
  ln.search_item (item);
  

  return 0;
}
