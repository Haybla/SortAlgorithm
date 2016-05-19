#include "common.h"
#include "heap_sort.h"
#include "quick_sort.h"
#include "merge_sort.h"
#include "bubble_sort.h"

int main(int argc, char const *argv[])
{
	/* code */
	int *a;
	int n;
	cout<<"please input n: ";
	cin>>n;

	a = new int[n];
	cout<<"please input unsorted array: ";
	for (int i=0; i < n; i++)
		cin>>a[i];

	heap_sort h1(a, n); 
	h1.heapsort();
	h1.print_a_();

	quick_sort q1(a, n);
	q1.quicksort();
	q1.print_a_();

	merge_sort m1(a, n);
	m1.mergesort();
	m1.print_a_();

	bubble_sort b1(a, n);
	b1.bubblesort();
	b1.print_a_();

	delete[] a;

	return 0;
}
