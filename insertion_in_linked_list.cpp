#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *link;
};

void add_at_end(struct node *head,int data)
{
    struct node *ptr,*temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    ptr=head;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;
}

void print_node(struct node *head)
{
      struct node *ptr=head;
      while(ptr!=NULL)
      {
        printf("%d ",ptr->data);
          ptr=ptr->link;
      }
}

struct node* add_beg(struct node *head,int data)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;

    temp->link=head;
    head=temp;
    return head;
} 

struct node* add_pos(struct node *head,int data,int pos)
{
     struct node *temp,*ptr;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;

    ptr=head;
    int var=1;
    while(var!=pos-1)
    {
        ptr=ptr->link;
        var++;
    }
    temp->link=ptr->link;
    ptr->link=temp;

return head;

}

int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    head->data=23;
    head->link=NULL;
    add_at_end(head,24);
    add_at_end(head,22);
    add_at_end(head,47);
    print_node(head);
    head=add_beg(head,88);
    printf("\n");
    print_node(head);
    printf("\n");
    head=add_pos(head,45,2);
    print_node(head);
return 0;
}
