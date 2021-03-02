#include<stdio.h>

struct node
{
  int data;
  struct node *link;
};
typedef struct node ll;
ll *temp;
int choice, data;
ll *first = NULL;
int
main ()
{

  while (choice != 9)
    {
        menu ();
      scanf ("%d", &choice);
      switch (choice)
	{
	case 1:
	  insertbeg ();
	  break;
	case 2:
	  break;
	case 3:
	  break;
	case 4:
	  break;
	case 5:
	  break;
	case 6:
	  break;
	case 7:
	  print ();
	  break;
	case 8:
	  break;
	case 9:
	  exit (0);
	  break;
	default:
	  printf ("-----wrong choice-----");
	}
    }


}

void
menu ()
{
  printf("enter the choice\n");
  printf ("1.Insert Beg \n2.Insert End \n3.Insert at position \n");

  printf ("4.Del First \n5.Delete Last \n6.Delete node at position \n");

  printf ("7.Print \n8.Search \n9.Exit \n");

  return;

}

void
insertbeg ()
{
  if (first == NULL)		//list empty
    {
      first = (ll *) malloc (sizeof (ll));
      printf ("enter the data\n");
      scanf ("%d", &data);
      first->data = data;
      first->link = NULL;
    }

  else
    {

      temp = (ll *) malloc (sizeof (ll));
      printf ("enter the data\n");
      scanf ("%d", &data);
      temp->data = data;
      temp->link = first;
      first = temp;

    }
    
}
   print ()
  {
    if (temp == NULL)
      {
	printf ("List is empty\n");
      }
      
else
      {
	temp = first;
	while (temp != NULL)
	  {
	    printf ("[%d ,%u]->", temp->data, temp->link);
	    temp = temp->link;
	  }
      }
      printf("\n");
  }
