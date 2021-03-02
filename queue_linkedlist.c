#include<stdio.h>
struct node{
    int data;
  struct node *link;
};
struct node *front=0,*rear=0;
int choice,num;
int main(){
    while(choice!=5){
        menu();
        scanf("%d",&choice);
        switch(choice){
            case 1:
              printf("enter the data\n");
              scanf("%d",&num);
              int res=enqueue(num);
              break;
              
              case 2:
              dequeue();
              break;
              
              case 3:
              display();
              break;
              
              case 4:
              peek();
              break;
              
              case 5:
              exit(0);
              break;
              
              default:printf("------wrong choice-----\n");
              break;
              
        }
    }
}
void menu(){
    printf("enter the choice\n");
    printf("1.enqueue\n2.dequeue\n3.display\n4.peek\n5.exit\n");
}
void enqueue(int x){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=front;
    front=newnode;
    return;
}
void dequeue(){
    struct node *temp, *q;
   temp=front;
   while(temp->link!=NULL){
       q=temp;
       temp=temp->link;
       
   }
   if(front == NULL){
       front = 0;
       free(temp);
       
   }
   else{
       q->link=NULL;
       free(temp);
   }
   
    return;
        
    
}
void display(){
    struct node *temp;
    temp=front;
    if(front == 0){
        printf("queue is empty no data\n");
        
    }
    else
    {
        while(temp!=0){
            printf("[%d  %u] ",temp->data,temp->link);
            temp=temp->link;
        }
    }
    return;
}
void peek(){
    //printf("the top element is :%d\n",top->data);
}