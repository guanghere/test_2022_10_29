#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int MAX(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int s = MAX(a, b);
//	printf("%d\n", s);
//	return 0;
//}

//void Swap(int* x, int* y)
//{
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	Swap(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}
//#include<math.h>
//int num(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i < 200; i++)
//	{
//		if (num(i) == 1)
//		{	
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n素数的个数为：%d 个\n", count);
//	return 0;
//}

//int leapyear(int x)
//{
//	return ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0));
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	
//	if (leapyear(n) == 1)
//		printf("是闰年\n");
//
//	else 
//		printf("不是闰年\n");
//
//	return 0;
//}

//int nums(int arr[], int key, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 0;
//	scanf("%d", &key);
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = nums(arr, key, sz);
//
//	if (ret == -1){
//		printf("找不到");
//	}
//	else {
//		printf("找到了,下标是:%d\n", ret);
//	}
//
//	return 0;
//}


//void Add(int *n)
//{
//	*n += 1;
//}
//
//int main()
//{
//	static int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}



int main()
{

	printf("%d", printf("%d", printf("%d", 43)));

	return 0;
}