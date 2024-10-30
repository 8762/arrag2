#include<iostream>
using namespace std;
void f(int *&a,int n)
{
	int *b=new int (n*2);//設定新空間大小 
//	int b[n*2];不能用 
	copy(a,a+5,b);
	delete[] a;// free a
	a = b;
	a[5]=8;
	a[6]=7;
	for(int i=0;i<7;i++)
 		cout<<a[i];
 	cout<<"\n";
 }
 int main()
 {
//	int a[5]={1,2,3,4,5},n=5; 不能用 
 	int *a = new int(5), n=5; // 只能用動態記憶體配置 
 	for(int i=1; i<=5; ++i) a[i-1]=i;//設定原始參數 
 	f(a,n);
 	for(int i=0;i<7;i++)
 		cout<<a[i];
 	//第一次遇到這種清況必可活用於下次 
 }
