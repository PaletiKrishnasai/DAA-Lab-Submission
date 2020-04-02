#include<bits/stdc++.h>
#include"BinarySearchTree.h"
using namespace std;

int n,size;


void Union(int *a,int n,int size)
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<size;j++)
		{
			insert(*(a+i*size + j));
		}
	}
	inorder(tptr);
}
