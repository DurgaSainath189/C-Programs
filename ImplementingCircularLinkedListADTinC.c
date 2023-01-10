#include<stdlib.h>
#include <stdio.h>
void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
 
 
struct node
{
        int data;
        struct node *next;
};
struct node *head=NULL;
int  main()     
{
        int choice;
        while(1){
               
                printf("\nMENU                             \n");
                printf("\n 1.Create");
                printf("\n 2.Display");
                printf("\n 3.Insert at the beginning");
                printf("\n 4.Insert at the end");
                printf("\n 5.Insert at specified position");
                printf("\n 6.Delete from beginning");
                printf("\n 7.Delete from the end");
                printf("\n 8.Delete from specified position");
                printf("\n 9.Exit");
                printf("\n--------------------------------------");
                printf("\nEnter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        create();
                                        break;
                        case 2:
                                        display();
                                        break;
                        case 3: 
                                        insert_begin();
                                        break;
                        case 4:
                                        insert_end();
                                        break;
                        case 5:
                                        insert_pos();
                                        break;
                        case 6:
                                        delete_begin();
                                        break;
                        case 7:
                                        delete_end();
                                        break;
                        case 8:
                                        delete_pos();
                                        break;
                        
                        case 9:
                                        exit(0);
                                        break;
                             
                        default:
                                        printf("\n Wrong Choice");
                                        break;
                }
        }
}
void create()
{
        struct node *new;
        struct node *p;
        new = (struct node*)malloc(sizeof(struct node));
        if(new==NULL)
        {
                printf("\nOut of Memory Space");
                exit(0);
        }
        printf("\nEnter the data value for the node:\t");
        scanf("%d",&new->data);
        new->next=NULL;
        if(head==NULL)
        {
                head=new;
                head->next = head;
        }
        else
        {
                p=head;
                while(p->next!=head)
                {
                        p=p->next;
                }
                p->next=new;
                new->next = head;
        }
}
void display()
{
        struct node *p;
        if(head==NULL)
        {
                printf("\nList is empty");
                return;
        }
        else
        {
                p=head;
                printf("\nThe List elements are:\n");
                while(p!=head)
                {
                        printf("%d\n",p->data );
                        p=p->next ;
                }
        }
        //To check the list is circular
        printf("\nthe second traversal");
        p = p->next;
        while(p!= head)
        {
            printf("\n%d", p->data);
            p = p->next;
        }
}
void insert_begin()
{
        struct node *new, *p;
        new=(struct node *)malloc(sizeof(struct node));
        if(new==NULL)
        {
                printf("\nOut of Memory Space");
                return;
        }
        printf("\nEnter the data value for the node:\t" );
        scanf("%d",&new->data);
        new->next =NULL;
        if(head==NULL)
        {
                head=new;
                head->next = head;
        }
        else
        {
            if(head->next == head)
                {
                    new->next = head;
                    head->next = new;
                    head = new;
                      
                }
            else
                {
                    p = head;
                    while(p->next!=head)
                    {
                    p = p->next;
                    }
                    p->next = new;
                    new->next=head;
                    head=new;
                }
        }
}
void insert_end()
{
        struct node *new,*p;
        new=(struct node *)malloc(sizeof(struct node));
        if(new==NULL)
        {
                printf("\nOut of Memory Space");
                return;
        }
        printf("\nEnter the data value for the node:\t" );
        scanf("%d",&new->data );
        new->next =NULL;
        if(head==NULL)
        {
                head=new;
        }
        else
        {
                p=head;
                while(p->next !=head)
                {
                        p=p->next ;
                }
                p->next =new;
                new->next =head;
        }
}
void insert_pos()
{
        struct node *p,*new;
        int i,pos;
        new=(struct node *)malloc(sizeof(struct node));
        if(new==NULL)
        {
                printf("\nOut of Memory Space");
                return;
        }
        printf("\nEnter the position for the new node to be inserted:\t");
        scanf("%d",&pos);
        printf("\nEnter the data value of the node:\t");
        scanf("%d",&new->data) ;
  
        new->next=NULL;
        if(pos==0)
        {
                p = head;
                while(p->next != head)
                p = p->next;
                p->next = new;
                new->next=head;
                head=new;
        }
        else
        {
                for(i=0,p=head;i<pos-1;i++) 
                   { p=p->next;
                        if(p==head)
                        {
                                printf("\nPosition not found:[Handle with care]\n");
                                return;
                        }
                   }
                new->next =p->next ;
                p->next=new;
        }
}
void delete_begin()
{
        struct node *q, *p = head;
        if(p==NULL)
        {
                printf("\nList is Empty:\n");
                return;
        }
        else
        {
                q = head;
                while(q->next!=head)
                q = q->next;
                q->next = head->next;
                head=head->next ;
                p->next = NULL;
                printf("\nThe deleted element is :%d\t",p->data);
                free(p);
        }
}
void delete_end()
{
        struct node *p,*q;
        if(head==NULL)
        {
                printf("\nList is Empty:");
                exit(0);
        }
        else if(head->next ==head)
        {
                p=head;
                head=NULL;
                printf("\nThe deleted element is:%d\t",p->data);
                free(p);
        }
        else
        {
                p=head;
                while(p->next!=head)
                {
                        q=p;
                        p=p->next;
                }
                q->next=head;
                printf("\nThe deleted element is:%d\t",p->data);
                p->next = NULL;
                free(p);
        }
}
void delete_pos()
{
        int i,pos;
        struct node *p,*q;
        if(head==NULL)
        {
                printf("\nThe List is Empty:\n");
                exit(0);
        }
        else
        {
                printf("\nEnter the position of the node to be deleted:\t");
                scanf("%d",&pos);
                if(pos==0)
                {
                        p=head;
                        head=head->next ;
                        p->next = NULL;
                        printf("\nThe deleted element is:%d\t",p->data  );
                        free(p);
                }
                else
                {
                        p=head;
                        for(i=0;i<pos;i++) 
                        { q=p; p=p->next ;
                                if(p==head)
                                {
                                        printf("\nPosition not Found:n");
                                        return;
                                }
                        }
                        q->next =p->next ;
                        printf("\nThe deleted element is:%d\t",p->data );
                        p->next = NULL;
                        free(p);
                }
        }
}
