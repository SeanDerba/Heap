#include "HeapTree.h"
#include <iostream>
using namespace std;


HeapTree::HeapTree() {
	length = 0;

}

void HeapTree::insertHeap(ItemType item) {
	data[length] = item;
	length++;
	reHeapUp(length - 1);
}

ItemType HeapTree::deleteHeap() {
	ItemType value = data[0];
	data[0] = data[length - 1];
	length--;
	reHeapDown(0);
	return value;
}

bool HeapTree::isFull() {
	return(length == MaxSize);
}

bool HeapTree::isEmpty() {
	return(length == 0);
}

void HeapTree::printHeap() {
	std::cout << "Size = " << length << endl;
	std::cout << "Data: ";
	for (int i = 0; i < length; i++) {
		std::cout << data[i] << ' ';
	}
	std::cout << endl<< endl;
}

void HeapTree::reHeapUp(int index) {
	if (index != 0) {
		int parent = (index - 1) / 2;
		if (data[parent] < data[index]) {
			swapValues(index, parent);
		}
		reHeapUp(parent);
	}
}

void HeapTree::reHeapDown(int index) {



	int left = 2 * index + 1;
	int right = 2 * index + 2;

	if (right > length - 1) {	// < 2 children
		if (left > length - 1) {	//No children
			return;
		}
		if (data[left] < data[index]) {	//1 child, less than index
			return;
		}
		else {	//1 child, greater than index
			swapValues(index, left);
			reHeapDown(left);
		}

	}
	
	if (data[left] < data[index] && data[right] < data[index]) {	//if index is already greater, break
		return;
	}
	if (data[left] > data[right]) {
		swapValues(index, left);
		reHeapDown(left);
	}
	else {
		swapValues(index, right);
		reHeapDown(right);
	}
}

void HeapTree::swapValues(int num1, int num2) {
	ItemType temp;
	temp = data[num2];
	data[num2] = data[num1];
	data[num1] = temp;
}