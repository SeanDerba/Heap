#pragma once

typedef int ItemType;
const int MaxSize = 100;

class HeapTree
{
public:
	HeapTree();
	void insertHeap(ItemType);
	ItemType deleteHeap();
	bool isFull();
	bool isEmpty();
	void printHeap();


private:
	ItemType data[MaxSize];
	int length;
	void reHeapUp(int index);
	void reHeapDown(int index);
	void swapValues(int num1, int num2);


};

