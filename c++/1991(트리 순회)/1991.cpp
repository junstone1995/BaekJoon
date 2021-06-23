#include <iostream>

using namespace std;

int n;

typedef struct node{
	char left;
	char right;
}			t_node;

	t_node node[27];

void	preorder(char root)
{
	if(root == '.')
		return;
	cout << root;
	preorder(node[root].left);
	preorder(node[root].right);
}

void	inorder(char root)
{
	if(root == '.')
		return ;
	inorder(node[root].left);
	cout << root;
	inorder(node[root].right);
}

void	postorder(char root)
{
	if(root == '.')
		return ;
	postorder(node[root].left);
	postorder(node[root].right);
	cout << root;
}

int main()
{
	cin >> n;
	char a,b,c;
	for(int i = 1; i<= n; i++)
	{
		cin >> a >> b >> c;
		node[a].left = b;
		node[a].right = c;
	}
	preorder('A');
	cout << '\n';
	inorder('A');
	cout << '\n';
	postorder('A');
	cout << '\n';
}
