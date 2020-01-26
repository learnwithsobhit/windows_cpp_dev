// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Header.h"

int main()
{

	Friend a("A");
	Friend b("B");
	Friend c("C");
	Friend d("D");
	Friend e("E");

	a.addFriendship(&b);
	b.addFriendship(&c);
	c.addFriendship(&d);
	d.addFriendship(&e);

	std::cout << a.canBeConnected(&e);

	vector<int> arr_radix= { 1,100,25,3,150,45,10,760,32,10,19,500,3000,76,1 };

	auto res_redix = radix_sort(arr_radix);


	int arr_sort[15] = { 1,10,25,3,15,45,1,76,32,10,19,5,3,76,1 };

	int* res = counting_sort(arr_sort,15);

	cout << "sorted array is: ";

	for (int ii = 0; ii < 15; ++ii) 
	{
		cout << res[ii] << ",";
	}

	cout << endl;
	Tree* root = NULL;

	/* Constructing tree given in
	the above figure */
	root = insert_avl(root, 10);
	root = insert_avl(root, 20);
	root = insert_avl(root, 30);
	root = insert_avl(root, 40);
	root = insert_avl(root, 50);
	root = insert_avl(root, 25);

	cout << "Preorder traversal of the "
		"constructed AVL tree is \n";
	pre_order_tree(root);

	cout << "sorted tree node inorder: ";
	in_order_tree(root);

	mylist* list_new = new mylist(1);
	list_new->next = new mylist(2);
	list_new->next->next = new mylist(3);
	list_new->next->next->next = new mylist(4);
	list_new->next->next->next->next = new mylist(5);
	list_new->next->next->next->next->next = new mylist(6);
	reverse_list(list_new);
	cout << "reverse list is :";
	while (list_new) {
		cout << list_new->data<<" ";
		list_new = list_new->next;
	}
	cout << endl;
	string str("abcxabcdabcdabcy");
	string patt("abcdabcy");
	cout << "match pattern size is: " << kmp_search(str, patt) << endl;
	string s1 = "abcd";
	string s2 = "qahcgde";
	cout << "longest common subsequence is of length: " << lcs(s1, s2) << endl;
	vector<int> v1 = { 9,  10 , 17,  15,  20 };
	vector<int> w = { 3,  4, 7,  6,  10 };
	cout << "max output generate is :" << knapsak(v1, w, 0, 12) << endl;

	towerOfHanoi(3, 'A', 'B', 'C');
	string s("ABC");
	stringPermuation(s, 0, 3);
	Tree* btree = new Tree(6);
	btree->left = new Tree(3);
	btree->right = new Tree(9);
	btree->left->left = new Tree(2);
	btree->left->right = new Tree(4);
	btree->right->left = new Tree(8);
	btree->right->right = new Tree(10);
	btree->right->right->right = new Tree(12);
	btree->right->right->right->left = new Tree(11);
	cout << "height of the tree is :" << heightOFTree(btree) << endl;;

	dfs(btree);
	cout << endl;
	bfs(btree);

	cout << "bit diff:" << countSet(14, 7) << endl;
	int i, j;
	int arr[] = { 1, 2, 3 };
	vector<int> sarr = { 1,2,3,4,5,5,6,7,8,9,100 };
	int m = sizeof(arr) / sizeof(arr[0]);
	swapArray(sarr);

	for (int i = 0; i < sarr.size(); ++i)
	{
		cout << sarr[i] << "," << endl;
	}
	cout << coinChange(arr, m, 5) << endl;
	vector<int> v = { 1,5  , 8 ,  9,  10 , 17,  17,  20 };
	maxGain(v, 8);
	cout << "end of code!" << endl;
	return 0;
}

