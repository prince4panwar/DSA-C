#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
}*root=NULL;

void insert()
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter a number for inserting :- ");
    scanf("%d",&temp->data);
    temp->left=temp->right=NULL;
    if(root==NULL)
    {
       root=temp;
       printf("\nNumber successfully inserted at root");
    }
    else
    {
        struct node *ptr1=root,*ptr2=NULL;
        while(ptr1!=NULL)
        {
            if(temp->data>ptr1->data)
            {
                ptr2=ptr1;
                ptr1=ptr1->right;
            }
            else if(temp->data<ptr1->data)
            {
                ptr2=ptr1;
                ptr1=ptr1->left;
            }
            else
            {
                printf("\nNumber already exist in the tree");
                return;
            }
        }
            if(temp->data>ptr2->data)
            {
                ptr2->right=temp;
                printf("\nNumber successfully inserted at right");
            }
            else if(temp->data<ptr2->data)
            {
                ptr2->left=temp;
                printf("\nNumber successfully inserted at left");
            }

    }

}

void delete()
{
    if(root==NULL)
    {
        printf("\nTree is empty! So you can't delete number");
    }
    else
    {
        struct node *ptr1=root,*ptr2=NULL;
        int num;
        printf("\nEnter a which you want to delete from the tree :- ");
        scanf("%d",&num);
        while(ptr1!=NULL)
        {
            if(num>ptr1->data)
            {
                ptr2=ptr1;
                ptr1=ptr1->right;
            }
            else if(num<ptr1->data)
            {
                ptr2=ptr1;
                ptr1=ptr1->left;
            }
            else
            {
                if(ptr1->left!=NULL&&ptr1->right!=NULL)
                {
                    struct node *ptr3=ptr1->right;
                    while(ptr3->left!=NULL)
                    {
                        ptr2=ptr3;
                        ptr3=ptr3->left;
                    }
                    if(ptr2==NULL)
                       ptr1->right=ptr3->right;
                    else
                        ptr2->left=ptr3->right;
                    ptr1->data=ptr3->data;
                    free(ptr3);
                    printf("Number Successfully deleted");
                    break;
                }
                else if(ptr1->left==NULL&&ptr1->right==NULL)
                {
                    if(ptr2==NULL)
                       root=NULL;
                    else if(num<ptr2->data)
                        ptr2->left=NULL;
                    else
                        ptr2->right=NULL;

                    free(ptr1);
                    printf("Number Successfully deleted");
                    break;
                }
                else
                {
                    //if(ptr2==NULL)
                    //{
                        if(ptr1->left!=NULL)
                        {
                            ptr2=ptr1;
                            ptr1=ptr1->left;
                            ptr2->data=ptr1->data;
                            printf("\n\n%d %d\n\n",ptr2->data,ptr1->data);
                            if(ptr1->left==NULL)
                                ptr2->left=NULL;
                            else
                                ptr2->left=ptr1->left;
                        }
                        else if(ptr1->right!=NULL)
                        {
                            ptr2=ptr1;
                            ptr1=ptr1->right;
                            ptr2->data=ptr1->data;
                            if(ptr1->right==NULL)
                                ptr2->right=NULL;
                            else
                                ptr2->right=ptr1->right;
                        }

                    //}
                    else if(num<ptr2->data)
                    {
                        if(ptr1->right==NULL)
                            ptr2->left=ptr1->left;
                        else
                            ptr2->left=ptr1->right;
                    }
                    else
                    {
                        if(ptr1->right==NULL)
                            ptr2->right=ptr1->left;
                        else
                            ptr2->right=ptr1->right;
                    }
                    free(ptr1);
                    printf("Number Successfully deleted");
                    break;
                }
            }
        }
        if(ptr1==NULL)
            printf("Value doesn't exist");
    }
}
void preorder(struct node *t)
{
    if(root==NULL)
    {
        printf("Tree is empty");
    }
    else if(t!=NULL)
    {
        printf("%d ",t->data);
        preorder(t->left);
        preorder(t->right);
    }
}
void inorder(struct node *t)
{
    if(root==NULL)
    {
        printf("Tree is empty");
    }
    else if(t!=NULL)
    {
        inorder(t->left);
        printf("%d ",t->data);
        inorder(t->right);
    }
}
void postorder(struct node *t)
{
    if(root==NULL)
    {
        printf("Tree is empty");
    }
    else if(t!=NULL)
    {
        postorder(t->left);
        postorder(t->right);
        printf("%d ",t->data);
    }
}
void main()
{
    int n;
    printf("*********************BINARY SEARCH TREE*********************");
    while(1)
    {
        printf("\n\nEnter 1 for inserting");
        printf("\nEnter 2 for preorder display");
        printf("\nEnter 3 for inorder display");
        printf("\nEnter 4 for postorder display");
        printf("\nEnter 5 for delete");
        printf("\nEnter 6 for exit");
        printf("\n\nEnter a number from above :- ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                printf("\n---------------------------------------------");
                insert();
                printf("\n---------------------------------------------");
                break;
            case 2:
                printf("\n---------------------------------------------\n");
                preorder(root);
                printf("\n---------------------------------------------");
                break;
            case 3:
                printf("\n---------------------------------------------\n");
                inorder(root);
                printf("\n---------------------------------------------");
                break;
            case 4:
                printf("\n---------------------------------------------\n");
                postorder(root);
                printf("\n---------------------------------------------");
                break;
            case 5:
                printf("\n---------------------------------------------");
                delete();
                printf("\n---------------------------------------------");
                break;
            case 6:
                break;
        }
        if(n==6)
            break;

    }
}
