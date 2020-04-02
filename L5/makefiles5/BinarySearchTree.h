#include<bits/stdc++.h>
using namespace std;


struct node{
	int data;
	struct node *left,*right;
};

struct node *tptr=NULL;

void insert(int x)
{
// create node
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = x;
	temp->left = temp->right = NULL;
//	insert the first node
	if(tptr == NULL)
		tptr = temp;
// insert non-first node	
	else
	{
		struct node* ptr = tptr;
		struct node* pptr = NULL;		
		while(ptr != NULL)
		{
			pptr = ptr;
			if(x<ptr->data)
				ptr = ptr->left;
			else 
				ptr = ptr->right;
		}
		if(x<pptr->data)
			pptr->left = temp;
		else 
			pptr->right = temp;
	}
}

void inorder(struct node* ptr)
{
	if(ptr != NULL)
	{
		inorder(ptr->left);
		printf("%d ",ptr->data);
		inorder(ptr->right);
	}
}

void postorder(struct node* ptr)
{
	if(ptr != NULL)
	{
		postorder(ptr->left);
		postorder(ptr->right);
		printf("%d ",ptr->data);
	}
}
void preorder(struct node* ptr)
{
	if(ptr != NULL)
	{
		printf("%d ",ptr->data);
		preorder(ptr->left);
		preorder(ptr->right);
	}
}
void treesort()
{
	int n;
	printf("Enter the array size :");
	scanf("%d",&n);	
	int a[n];
	for(int i = 0;i < n;++i)
		scanf("%d",&a[i]);
	for(int i = 0; i<n ; ++i)
		insert(a[i]);
	inorder(tptr);
}
