#ifndef _CLASS_HEAP_SORT_
#define _CLASS_HEAP_SORT_

#include "sort.h"

class heap_sort: public sort{
public:

	explicit heap_sort(int num):sort(num){
		cout<<"create heap_sort successfully"<<endl;
	}

	explicit heap_sort(const int *array, int num):sort(array, num){
		cout<<"create heap_sort successfully"<<endl;
	}

	~heap_sort(){
		cout<<"free heap_sort successfully, ";
	}


	void maxheap(int *a, int p, int n){
		int left = p*2;
		int right = p*2 + 1;
		int max = p;
		int tmp;
		if (left < n && a[left] > a[p])
			max = left;
		if (right < n && a[right] > a[max])
			max = right;

		if (p != max){
			tmp = a[max];
			a[max] = a[p];
			a[p] = tmp;
			maxheap(a, max, n);
		}
	}

	void hsort(int *a, int n){
		//build max heap
		for (int i = n/2; i >= 0; i--){
			maxheap(a, i, n);
		}

		int tmp;
		while(n > 1){
			tmp = a[0];
			a[0] = a[n-1];
			a[n-1] = tmp;

			n--;
			maxheap(a, 0, n);
		}	
	}

	void heapsort(){
		hsort(a_, n_);
	}

	void print_a_(){
		cout<<"heap sorted array: ";
		for (int i = 0; i < n_; i++)
			cout<<a_[i]<<" ";
		cout<<endl;
	}
};

#endif