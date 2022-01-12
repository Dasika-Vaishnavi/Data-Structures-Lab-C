#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
/*declaring a structure to create a node*/
struct node {
    int data;
    struct node *next;
};

struct node *top;

void push(void) {
    struct node *nn;
    int a;
    nn=(struct node *)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&nn->data);
    a=nn->data; 
    if(top==NULL) {
        nn->next=NULL; 
        top=nn;
    }
    else {
        nn->next=top;
        top=nn;
    }
    printf("%d succ. inserted\n",a);
    return;
}
    
/*deletion operation*/
void pop(void){
    struct node *pt,*t;
    int x;
    if(top==NULL){
        printf("stack is empty\n");
        return;
    }
    else{
      struct  node *temp = top;
      printf("%d is deleted\n", temp->data);
      top = top->next;
      free(temp);
    }
    
}


void display(void){
    struct node *temp;
    if(top==NULL){
        printf("stack is empty\n");
        return;
    }
    printf("elements are:\n");
    temp=top;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    return;
}


/* main program*/
int main(){
    int c,a;
    top=NULL;
    do{
        printf("1:push\n2:pop\n3:display\n4:exit\nenter choice:");
        scanf("%d",&c);
        switch(c) {
            case 1:
                push(); 
                break;
            case 2:pop(); break;
            case 3:display(); break;
            case 4:printf("program ends\n");break;
            default:printf("wrong choice\n");break;
        }
    }while(c!=4);
    return 0;
}
