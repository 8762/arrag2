#include<iostream>
using namespace std;
void f(int *&a,int n)
{
	int *b=new int (n*2);//�]�w�s�Ŷ��j�p 
//	int b[n*2];����� 
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
//	int a[5]={1,2,3,4,5},n=5; ����� 
 	int *a = new int(5), n=5; // �u��ΰʺA�O����t�m 
 	for(int i=1; i<=5; ++i) a[i-1]=i;//�]�w��l�Ѽ� 
 	f(a,n);
 	for(int i=0;i<7;i++)
 		cout<<a[i];
 	//�Ĥ@���J��o�زM�p���i���Ω�U�� 
 }
