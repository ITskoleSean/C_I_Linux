#include "../Headers/BinarySearch.h"

int Search(int *pArray, int key, int low, int high) {

	int mid = low + (high - low) / 2;

	if (key < pArray[mid]){
		return Search(pArray, key, low, mid - 1);
	}
	
	if ( key > pArray[mid]) {
		return Search(pArray, key, mid + 1, high);
	}

	if ( key == pArray[mid]) {
		return mid;
	}

	return -1;
}
