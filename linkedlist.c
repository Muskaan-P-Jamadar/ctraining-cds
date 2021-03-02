/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct node{
    int data;
    struct node *link;
};
struct node *first=NULL;
struct node *temp; 
int choice,data;
int main()
{          
    while(choice!=5){
        menu();
        scanf("%d",&choice);
        switch(choice){
            case 1:
               insertbeg();
               break;
            case 2:
            insertatpos();
            break;
            case 3:
            insertend();
            break;
            case 4: 
            display();
            break;
            case 5:
            exit(0);
            break;
            case 6:
              len();
              break;
            default :
            printf("---------wrong choice---------");
            
        }
    }
    

    return 0;
}
void menu(){
    printf("enter the choice\n");
    printf("1.insertbeg\n2.insertatpos\n3.insertend\n4.display\n5.exit\n6.length_of_list\n");
    return;
}


void insertbeg(){
    if(first == NULL){
     first = (struct node*)malloc(sizeof(struct node));   
    printf("enter the data\n");
    scanf("%d",&data);
    first->data=data;
    first->link=NULL;
}
else{
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data\n");
    scanf("%d",&data);
    temp->data=data;
    temp->link=first;
    first=temp;
    
}
}

 len(){
    int count=0;
    struct node *length;
    length=first;
    if(first == NULL){
        printf("no list exist\n");
    }
    else
    {
        while(length!=NULL){
            count++;
            length = length->link;
            
        }
        printf("length of list is : %d\n",count);
        return count;
    }
}
void insertatpos(){
    int pos,i=1;
    struct node *temp1,*p;
    printf("enter the position after which node should be inserted\n");
    scanf("%d",&pos);
   int size= len();
    if(pos>size){
        printf("out of bounds\n");
        
    }
    else{
        p=first;
        while( i<pos){
            p=p->link;
            i++;
        }
        
        
        temp1=(struct node*)malloc(sizeof(struct node));
        printf("enter data\n");
        scanf("%d",&data);
        temp1->data=data;
        temp1->link=p->link;
        p->link=temp1;
        
    }
}
void insertend(){
    
}
void display(){
    if(first == NULL){
        printf("---------------list empty------------\n");
    }
    else
    {
        while(temp!=NULL){
        printf("[%d  %u]",temp->data,temp->link);
        temp=temp->link;
            
        }
    }
}