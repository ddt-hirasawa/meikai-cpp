// 演習7-17 ポインタp が 指すオブジェクトの先頭nバイトにvを代入する関数を作成せよ

#include<iostream>

using namespace std;

void mem_set(void* p,const int n,unsigned char v);

int main()
{
	const int n = 5;
	unsigned char* p;
	void* empty = reinterpret_cast<void*>(*p);
	unsigned char* v = 'S';

	for(int i= 0;i < n ;i++)
		cout << *p++;

	mem_set(empty,5,v);

	for(int i= 0;i < n ;i++)
			cout << *p++;

	return 0;
}

void mem_set(void* p,const int n,unsigned char v)
{
	for(int i=0;i < n;i++){
		unsigned char* tmp = reinterpret_cast<unsigned char*>(*(p+i));
		*tmp++ = &v;
	}
}
