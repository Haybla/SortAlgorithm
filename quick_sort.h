#ifndef _CLASS_QUICK_SORT_
#define _CLASS_QUICK_SORT_

#include "sort.h"

class quick_sort: public sort{
public:

	explicit quick_sort(int num):sort(num){
		cout<<"create quick_sort successfully"<<endl;
	}

	explicit quick_sort(const int *array, int num):sort(array, num){
		cout<<"create quick_sort successfully"<<endl;
	}

	~quick_sort(){
		cout<<"free quick_sort successfully, ";
	}


	void sort_l2r(int *a, int l, int r){
		if (l >= r)
			return;

		int tmp;
		int pos = l;
		for (int i = l; i < r; i++){
			if (a[i] < a[r]){
				//swap a[pos] and p[i]
				tmp = a[pos];
				a[pos] = a[i];
				a[i] = tmp;
				pos++;
			}
		}

		//swap a[pos] and a[r]
		tmp = a[pos];
		a[pos] = a[r];
		a[r] = tmp;

		sort_l2r(a, l, pos-1);
		sort_l2r(a, pos+1, r);
	}

	void quicksort(){
		sort_l2r(a_, 0, n_-1);
	}

	void print_a_(){
		cout<<"quick sorted array: ";
		for (int i = 0; i < n_; i++)
			cout<<a_[i]<<" ";
		cout<<endl;
	}
};

#endif