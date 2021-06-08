#include <iostream>

using namespace std;

class ListNode
{
public:
	int Value;
	ListNode* pNext;

	ListNode(int ValueIn)
	{
		Value = ValueIn;
		pNext = nullptr;
	}
};

// O(1)
void InsertFront(ListNode*& pRoot, int Value)
{
	ListNode* pNew = new ListNode(Value);
	pNew->pNext = pRoot;
	pRoot = pNew;
}

// O(n)
int Size(ListNode* pRoot)
{
	if (pRoot)
	{
		int count = 1;
		ListNode* pCurrent = pRoot;
		while (pCurrent->pNext != nullptr)
		{
			++count;
			pCurrent = pCurrent->pNext;
		}
		return count;
	}
	else
		return 0;
}


int main()
{
	ListNode* pRoot = nullptr;
	int initialSize = Size(pRoot);

	InsertFront(pRoot, 4);
	InsertFront(pRoot, 10);

	int Size2 = Size(pRoot);
}
