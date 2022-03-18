// CS218
// Heap.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "HeapTree.h"

using namespace std;

int main()
{
	HeapTree x = HeapTree();
	x.insertHeap(10);
	x.printHeap();
	x.insertHeap(4);
	x.printHeap();
	x.insertHeap(50);
	x.printHeap();
	x.insertHeap(100);
	x.printHeap();

	x.deleteHeap();
	x.printHeap();
	x.deleteHeap();
	x.printHeap();
	x.deleteHeap();
	x.printHeap();
	x.deleteHeap();
	x.printHeap();


}
