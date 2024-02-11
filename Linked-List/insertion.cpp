/////////////////////////////////////////////////////// Insertion Head
// #include <iostream>
// using namespace std;

class Node
{
public:
  int data;
  Node *next;
    Node (int value)
  {
	data = value;
	next = NULL;
  }

};

int main ()
{
  // create Node 
  Node *Head;
  Head = NULL;
//   cout << Head->data << endl;
//   cout << Head->next << endl;

  // array
  int arr[] = { 2, 4, 6, 8 };


  // check if LL is exist
  for (int i = 0; i < 4; i++)
	{

	  if (Head == NULL)
		{
		  Head = new Node (arr[i]);
		}

	  // check if LL is not exist
	  else
		{
		  Node *temp;
		  temp = new Node (arr[i]);
		  temp->next = Head;
		  Head = temp;
		}
	}
  // print the LL 
  Node *temp = Head;
  while (temp)
	{
	  cout << temp->data << " " << endl;
	  temp = temp->next;

	}
  return 0;
}


//////////////////////////////////////////////////////////////// Insertion End



//////////////////////////////////////////////////////////////// Insertion middle

