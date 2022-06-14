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

  void traverse ()
  {
    node *ptr = head;

    while (ptr != NULL)
      {
	cout << ptr->info << "->";
	ptr = ptr->link;

      }
    cout << "NULL";

  }
};

int
main ()
{
  node *head = NULL;
  linked_list ln;
  int n;
  cout << "Enter number of elements\n";
  cin >> n;
  cout << "Enter elements in the linked list" << endl;
  for (int i = 0; i < n; i++)
    {
      //Taking the input

      int ele;
      cin >> ele;
      ln.add_node (ele);

    }
  cout << "Elements in Linked List:\n" ln.traverse ();


  return 0;
}
