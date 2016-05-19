#ifndef _CLASS_SORT_
#define _CLASS_SORT_

#include "common.h"

class sort{
protected:
	int *a_;
	int n_;

public:
	explicit sort(int num){
		a_ = new int[num];
		cout<<"create array successfully, ";
	}

	explicit sort(const int *array, int num){
		a_ = new int[num];
		n_ = num;
		memcpy(a_, array, sizeof(int)*num);
		cout<<"create array successfully, ";
	}

	~sort(){
		delete[] a_;
		cout<<"free array successfully"<<endl;
	}
};

#endif