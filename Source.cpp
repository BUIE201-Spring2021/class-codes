#include <iostream>

using namespace std;

class TreeNode
{
public:
	int Value;
	TreeNode* pLeft;
	TreeNode* pRight;

	TreeNode(int ValueIn)
	{
		Value = ValueIn;
		pLeft = nullptr;
		pRight = nullptr;
	}
};

// O(log n)
void Insert(TreeNode*& pRoot, int value)
{
	if (pRoot == nullptr)
		pRoot = new TreeNode(value);
	else if (value > pRoot->Value)
		Insert(pRoot->pRight, value);
	else
		Insert(pRoot->pLeft, value);
}

// O(log n)
bool Find(TreeNode* pRoot, int value)
{
	if (pRoot == nullptr)
		return false;
	else if (value == pRoot->Value)
		return true;
	else if (value > pRoot->Value)
		return Find(pRoot->pRight, value);
	else
		return Find(pRoot->pLeft, value);
}

// O(n)
int Size(TreeNode* pRoot)
{
	if (pRoot == nullptr)
		return 0;
	else
	{
		int LeftSize = Size(pRoot->pLeft);
		int RightSize = Size(pRoot->pRight);
		return 1 + LeftSize + RightSize;
	}
}

int main()
{
	TreeNode* pRoot = nullptr;
	Insert(pRoot, 15);
	Insert(pRoot, 20);
	Insert(pRoot, 6);
	Insert(pRoot, 10);
	Insert(pRoot, 3);

	bool Find6 = Find(pRoot, 6);
	bool Find8 = Find(pRoot, 8);

	int size = Size(pRoot);
}
