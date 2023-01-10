#include <stdlib.h>
#include <stdio.h>
void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
void search();
void insert_after_key();

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
int main()
{
    int choice;
    while (1)
    {

        printf("\n***************MENU***************\n");
        printf("\n 1.Create");
        printf("\n 2.Display");
        printf("\n 3.Insert at the beginning");
        printf("\n 4.Insert at the end");
        printf("\n 5.Insert at specified position");
        printf("\n 6.Delete from beginning");
        printf("\n 7.Delete from the end");
        printf("\n 8.Delete from specified position");
        printf("\n 9.search");
        printf("\n 10.insert after a key");
        printf("\n 11.Exit");
        printf("\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice)
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
            search();
            break;
        case 10:
            insert_after_key();
            break;
        case 11:
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
    struct node *new, *p;
    new = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("\nOut of Memory Space");
        exit(0);
    }
    printf("\nEnter the data value for the node:\t");
    scanf("%d", &new->data);
    new->next = NULL;
    if (head == NULL)
    {
        head = new;
    }
    else
    {
        p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = new;
    }
}

void display()
{
    struct node *p;
    if (head == NULL)
    {
        printf("\nList is empty");
        return;
    }
    else
    {
        p = head;
        printf("\nThe List elements are:\n");
        while (p->next!= NULL)
        {
            printf("%d\n", p->data);
            p = p->next;
        }
       printf("%d\n", p->data); 
    }
}
void insert_begin()
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("\nOut of Memory Space");
        return;
    }
    printf("\nEnter the data value for the node:\t");
    scanf("%d", &new->data);
    new->next = NULL;
    if (head == NULL)
    {
        head = new; 
    }
    else
    {
        new->next = head;
        head = new;
    }
}
void insert_end()
{
    struct node *new, *p;
    new = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("\nOut of Memory Space");
        return;
    }
    printf("\nEnter the data value for the node:\t");
    scanf("%d", &new->data);
    new->next = NULL;
    if (head == NULL)
    {
        head = new;
    }
    else
    {
        p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = new;
    }
}
void insert_pos()
{
    struct node *p, *new;
    int i, pos;
    new = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("\nOut of Memory Space");
        return;
    }
    printf("\nEnter the position for the new node to be inserted:\t");
    scanf("%d", &pos);
    printf("\nEnter the data value of the node:\t");
    scanf("%d", &new->data);

    new->next = NULL;
    if (pos == 0)
    {
        new->next = head;
        head = new;
    }
    else
    {
        for (i = 0, p = head; i < pos - 1; i++)
        {
            p = p->next;
            if (p == NULL)
            {
                printf("\nPosition not found:[Handle with care]\n");
                return;
            }
        }
        new->next = p->next;
        p->next = new;
    }
}
void delete_begin()
{
    struct node *p = head;
    if (p == NULL)
    {
        printf("\nList is Empty:\n");
        return;
    }
    else
    {
        head = head->next;
        p->next = NULL;
        printf("\nThe deleted element is :%d\t", p->data);
        free(p);
    }
}
void delete_end()
{
    struct node *p, *q;
    if (head == NULL)
    {
        printf("\nList is Empty:");
        exit(0);
    }
    else if (head->next == NULL)
    {
        p = head;
        head = NULL;
        printf("\nThe deleted element is:%d\t", p->data);
        free(p);
    }
    else
    {
        p = head;
        while (p->next != NULL)
        {
            q = p;
            p = p->next;
        }
        q->next = NULL;
        printf("\nThe deleted element is:%d\t", p->data);
        free(p);
    }
}
void delete_pos()
{
    int i, pos;
    struct node *p, *q;
    if (head == NULL)
    {
        printf("\nThe List is Empty:\n");
        exit(0);
    }
    else
    {
        printf("\nEnter the position of the node to be deleted:\t");
        scanf("%d", &pos);
        if (pos == 0)
        {
            p = head;
            head = head->next;
            p->next = NULL;
            printf("\nThe deleted element is:%d\t", p->data);
            free(p);
        }
        else
        {
            p = head;
            for (i = 0; i < pos; i++)
            {
                q = p;
                p = p->next;
                if (p == NULL)
                {
                    printf("\nPosition not Found:n");
                    return;
                }
            }
            q->next = p->next;
            printf("\nThe deleted element is:%d\t", p->data);
            free(p);
        }
    }
}
void search()
{
    int key, i = 0;
    printf("enter the key to be searched : ");
    scanf("%d", &key);
    struct node *p = head;
    while(p!= NULL)
    {
        if (p->data == key)
        {
            printf("%d", i);
            return;
        }
        i++;
        p=p->next;
    }
    printf("\nkey not found.\n");
}
void insert_after_key()
{
	struct node *new = (struct node *)malloc(sizeof(struct node));
	printf("Enter the data:");
    scanf("%d",&new->data);
    int key;
    printf("enter the key :");
    scanf("%d",&key);
    struct node *p = head;
    while (p->data != key)
    {
        p = p->next;
    }
    new->next = p->next;
    p->next = new;
}
