// QuickSort.cpp: 定义应用程序的入口点。
//

#include "QuickSort.h"

using namespace std;
//交换函数
template<typename T>
void Swap(T& a, T& b)
{
	T c = a;
	a = b;
	b = c;
}

//快排分组函数
template <typename T>
int Partition(T A[], int p, int r)
{
	T x = A[r];
	int i = p - 1;
	for (int j = p; j < r; j++)
	{
		if (A[j] < x)
		{
			i++;
			Swap(A[j], A[i]);
		}
	}
	i++;
	Swap(A[i], A[r]);
	return i;
}

//快排函数
template <typename T>
void QuickSort(T A[], int p, int r)
{
	if (p < r)
	{
		int q = Partition(A, p, r);
		QuickSort(A, p, q - 1);
		QuickSort(A, q + 1, r);
	}
}

//主函数
int main()
{
	int a[] = { 2,5,3,1,9,0,-1,100,-50 };
	for each (int num in a)
	{
		cout << num << " ";
	}
	cout << endl;
	QuickSort(a, 0, 8);
	for each (int num in a)
	{
		cout << num << " ";
	}
	cout << endl;
	return 0;
}
