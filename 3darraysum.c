/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int a[2][2][2] = {{{10,10},{10,10}},{{10,10},{10,10}}};
  int *p = 0;
  p = &a;
  int c = 0;

  for (int i = 0; i < 2; i++)
    {
      for(int j = 0;	j < 2;	j++)
	{
	    for(int k=0;k<2;k++)
	    {
	  c =(c + *(*(*(a + i) + j)+k));

	}
      }
    }
      printf ("%d\n", c);

      return 0;
    }
