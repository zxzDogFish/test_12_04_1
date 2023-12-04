#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int binary_search(int arr[],int sz ,int n )
{
	int mid, left, right;
	left = 0;
	right = sz - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else if (arr[mid] > n)
		{
			right = mid - 1;
		}
		else 
			return mid;
	}
	return 0;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int i, j, sz, n, ret;
	scanf("%d", &n);
	sz = sizeof(arr) / sizeof(arr[0]);
	ret = binary_search(arr, sz, n);
	if (ret) 
		printf("找到了，下标是%d", ret);
	else 
		printf("没找到");
	return 0;
}