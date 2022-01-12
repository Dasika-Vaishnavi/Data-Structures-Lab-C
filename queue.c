#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
/*declaring a structure to create a node*/
struct node {
    int data;
    struct node *next;
};

struct node *front;
struct node *rear;

void push(void) {
    struct node *nn;
    int a;
    nn=(struct node *)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&nn->data);
    a=nn->data;
    nn->next = NULL;
    if(rear==NULL) {
        rear=nn;
        front = nn;
    }
    else {
        rear->next = nn;
        rear = rear->next;
    }
    printf("%d succ. inserted\n",a);
    return;
}
    
    




/*deletion operation*/
void pop(void){
    struct node *pt,*t;
    int x;
    if(front==NULL){
        printf("queue is empty\n");
        return;
    }
    else{
      struct  node *temp = front;
      printf("%d is deleted\n", front->data);
      front = front->next;
      free(temp);
    }
    
}


void display(void){
    struct node *temp;
    if(rear==NULL){
        printf("queue is empty\n");
        return;
    }
    printf("elements are:\n");
    temp=front;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    return;
}


/* main program*/
int main(){
    int c,a;
    front=NULL;
    rear = NULL;
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
