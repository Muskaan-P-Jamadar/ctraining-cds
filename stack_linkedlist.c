/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct node
{
  int data;
  struct node *next;
};
struct node *top = 0;
int choice, num;
int
main ()
{
  while (choice != 5)
    {
      menu ();
      scanf ("%d", &choice);
      switch (choice)
	{
	case 1:
	  printf ("enter the data to push\n");
	  scanf ("%d", &num);
	  int res = push (num);
	  break;

	case 2:
	  pop ();
	  break;

	case 3:
	  peek ();
	  break;

	case 4:
	  display ();
	  break;

	case 5:
	  exit (0);
	  break;

	default:
	  printf ("wrong choice\n");
	  break;
	}
    }


  return 0;
}

void
menu ()
{
  printf ("enter your choice\n");
  printf ("1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
}

void
push (int x)
{
  struct node *newnode;
  newnode = (struct node *) malloc (sizeof (struct node));
  newnode->data = x;
  newnode->next = top;
  top = newnode;
  return;
}

void
display ()
{
  struct node *temp;
  temp = top;
  if (top == 0)
    {
      printf ("stack is empty\n");
    }
  else
    {
      while (temp != 0)
	{
	  printf ("[%d  %u]", temp->data, temp->next);
	  temp = temp->next;
	}
    }
  return;
}

void
peek ()
{
  if (top == 0)
    {
      printf ("---stack empty---");
    }
  else
    {
      printf ("the top element is : %d\n", top->data);
    }
  return;
}

void
pop ()
{
  struct node *temp;
  temp = top;
  if (temp == 0)
    {
      printf ("stack dosent exist");
    }
  else
    {
      printf ("The poped element is : %d\n", temp->data);
      top = temp->next;
      free (temp);
    }
  return;

}
