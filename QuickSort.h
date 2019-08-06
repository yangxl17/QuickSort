// QuickSort.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>

// TODO: 在此处引用程序需要的其他标头。

//交换函数
template<typename T>
void Swap(T& a, T& b);


//快排分组函数
template <typename T>
int Partition(T A[], int p, int r);

//快排函数
template <typename T>
void QuickSort(T A[], int p, int r);
