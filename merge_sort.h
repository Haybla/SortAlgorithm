#ifndef _CLASS_MERGE_SORT_
#define _CLASS_MERGE_SORT_

#include "sort.h"

class merge_sort: public sort{
public:

	explicit merge_sort(int num):sort(num){
		cout<<"create merge_sort successfully"<<endl;
	}

	explicit merge_sort(const int *array, int num):sort(array, num){
		cout<<"create merge_sort successfully"<<endl;
	}

	~merge_sort(){
		cout<<"free merge_sort successfully, ";
	}


	void merge(int *a, int left, int mid, int right){
		int length = right - left + 1;
		int *tmp = new int[length];
		int l = left;
		int r = mid + 1;
		int t = 0;

		while(l <= mid && r <= right){
			if (a[l] <= a[r]){
				tmp[t++] = a[l++];
			}else{
				tmp[t++] = a[r++];
			}
		}

		while(l <= mid){
			tmp[t++] = a[l++];
		}

		while(r <= right){
			tmp[t++] = a[r++];
		}

		memcpy(a+left, tmp, sizeof(int)*length);

		delete[] tmp;
	}

	void sort_l2r(int *a, int left, int right){
		int mid;

		if (left < right){
			mid = (left + right) / 2;
			sort_l2r(a, left, mid);
			sort_l2r(a, mid+1, right);
			merge(a, left, mid, right);
		}
	}

	void mergesort(){
		sort_l2r(a_, 0, n_-1);
	}

	void print_a_(){
		cout<<"merge sorted array: ";
		for (int i = 0; i < n_; i++)
			cout<<a_[i]<<" ";
		cout<<endl;
	}
};

#endif