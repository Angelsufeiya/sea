#include "AVLTree.h"
#include <iostream>
using namespace std;

int main()
{
	wf::AVLTree<int> bst;

	bst.insert(5);
	bst.insert(2);
	bst.insert(8);
	bst.insert(0);
	bst.insert(4);
	bst.insert(7);
	bst.insert(9);
	bst.insert(1);
	bst.insert(3);
	bst.insert(6);
	/*
	t.insert(16);
	t.insert(3);
	t.insert(7);
	t.insert(11);
	t.insert(9);
	t.insert(26);
	t.insert(18);
	t.insert(14);
	t.insert(15);*/

	/*t.insert(4);
	t.insert(2);
	t.insert(6);
	t.insert(1);
	t.insert(3);
	t.insert(5);
	t.insert(15);
	t.insert(7);
	t.insert(16);
	t.insert(14);*/
	//bst.insert(1);
	//bst.insert(2);
	//bst.insert(3);
	//bst.insert(4);
	//bst.insert(5);
	//bst.insert(6);
	//bst.insert(7);
	//bst.insert(7);
	//bst.insert(6);
	//bst.insert(5);
	//bst.insert(4);
	//bst.insert(3);
	//bst.insert(2);
	//bst.insert(1);


	//bst.erase(7);
	vector<int> v = bst.InOrder();

	for (auto& i : v)
	{
		cout << i << ' ';
	}
	return 0;
}