/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int stack[5];
int choice,data,top=-1,size=5;
int main()
{
    
    while(choice!=4){
        menu();
        scanf("%d",&choice);
        switch(choice){
            case 1:
            if(top==size-1){
                printf("Stck is full cannot push\n");
                break;
            }
            else{
                push();
                break;
            }
            case 2:
            if(top ==-1){
                printf("stack is empty\n");
                break;
            }
            else{
                pop();
                break;
            }
            case 3:
            print();
            break;
            
            case 4:
            exit(0);
            break;
            
            default : printf("---------wrong choice-----------\n");
        }
    }
    

    return 0;
}
void menu(){
    printf("enter the choice\n");
    printf("1.push\n.pop\n3.print\n4.exit\n");
}
void push(){
    printf("enter the data\n");
    scanf("%d",&data);
    top++;
    stack[top]=data;
    printf("element pushed\n");
    return;
    
}
void pop(){
    printf("the poped element is :  %d\n",stack[top]);
    top--;
    return;
}
void print(){
    for(int i=top;i>=0;i--){
        printf("%d ",stack[i]);
    }
    
        
    }
