#ifndef _CLASS_BUBBLE_SORT_
#define _CLASS_BUBBLE_SORT_

#include "sort.h"

class bubble_sort: public sort{
public:

	explicit bubble_sort(int num):sort(num){
		cout<<"create bubble_sort successfully"<<endl;
	}

	explicit bubble_sort(const int *array, int num):sort(array, num){
		cout<<"create bubble_sort successfully"<<endl;
	}

	~bubble_sort(){
		cout<<"free bubble_sort successfully, ";
	}


	void bubble(int *a, int n){
		int tmp; 

		for (int i = n-1; i > 0; i--){
			for (int j = 0; j < i; j++){
				if (a[j+1] < a[j]){
					tmp = a[j+1];
					a[j+1] = a[j];
					a[j] = tmp;
				}
			}
		}
	}

	void bubblesort(){
		bubble(a_, n_);
	}

	void print_a_(){
		cout<<"bubble sorted array: ";
		for (int i = 0; i < n_; i++)
			cout<<a_[i]<<" ";
		cout<<endl;
	}
};

#endif