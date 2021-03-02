/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct node {
    int data;
    struct node *link;
};
struct node *root=NULL;
int data,choice,len=0;
void insertbeg(void);
void display(void);

int main()
{
    while(choice != 11){
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
            delend();
            break;
            
            case 5:
            delbeg();
            break;
            
            case 6:
            delpos();
            break;
            
            case 7:
            display();
            break;
            
            case 8:
             search();
             break;
             
             case 10:
              len =  length();
              printf("length of list is :%d\n",len);
              break;
              
              case 11:
               exit(0);
               break;
               
              default: printf("--------wrong choice-----------");
              break;
              
            
        
            
            
        }
    }

    return 0;
}
void menu(){
    printf("enter the choice\n");
    printf("1.insertbeg\n2.insertatpos\n3.insertend\n4.delend\n5.delbeg\n6.delpos\n7.dispaly\n8.search\n10.length\n11.exit\n");
}
void insertbeg()
{
    if(root == NULL){
     root = (struct node*)malloc(sizeof(struct node));
     printf("enter the data\n");
     scanf("%d",&data);
     root->data= data;
     root->link=NULL;
        
    }
    else
    {
        struct node *temp;
        temp=(struct node*)malloc(sizeof(struct node));
        printf("ener the data\n");
        scanf("%d",&data);
        temp->data=data;
        temp->link=root;
        root=temp;
        
    }
    return;
    
}
void display(){
    if(root == NULL){
        printf("list empty");
        
    }
    else
    {
        struct node *temp;
        temp=root;
        while(temp!=NULL){
            printf("[%d-->%u] ",temp->data,temp->link);
            temp=temp->link;
        }
        
        
        
    }
}

void insertatpos(){
    int pos,i=0;
    struct node *temp,*p;
    printf("enter position after which node the new node should be inserted\n");
    scanf("%d",&pos);
    if(pos>len){
        printf("----------------out of bounds----------");
    }
    else
    {
        p=root;
        while(i<pos){
            p=p->link;
            i++;
            
        }
        temp=(struct node*)malloc(sizeof(struct node));
        printf("enter the data\n");
        scanf("%d",&data);
        temp->data=data;
        temp->link=p->link;
        p->link=temp;
        
    }
    return;
}
void insertend(){
    struct node *temp;
        temp=(struct node*)malloc(sizeof(struct node));
        printf("enter the data\n");
        scanf("%d",&data);
        temp->data=data;
        temp->link=NULL;
        if(root == NULL){
            root=temp;
        }
        else{
            struct node *p;
            p=root;
            while(p->link!=NULL){
                p=p->link;
            }
            p->link=temp;
        }
    
    return;
}
void delbeg(){
    struct node *temp;
    temp=root;
    root=temp->link;
    temp->link=NULL;
    free(temp);
}

void delpos(){
    struct node *p,*q;
    int pos,i=1;
    printf("enter the position to delete\n");
    scanf("%d",&pos);
    if(pos>len){
        printf("-------invalid position----\n");
        }
        else{
            p=root;
            while(i<pos-1){
                p=p->link;
                i++;
            }
            q=p->link;
            p->link=q->link;
            q->link=NULL;
            free(q);
            
        }
    
    return;
}
void delend() {
    
    struct node *temp ,*q;
  
      temp=root;
      while(temp->link!=NULL){
          q=temp;
          temp=temp->link;
      }
      if(temp == NULL){
          root = 0;
          free(temp);
      }
      else{
          q->link=NULL;
          free(temp);
          
      }
     
     
     
  }
 
void search(){
}
int length(){
    struct node *temp;
    int count=0;
    if(root == NULL){
        printf("list is empty\n");
    }
    else
    
    temp=root;
    while(temp!=NULL){
        count++;
        temp=temp->link;
    }
    return count;
}


