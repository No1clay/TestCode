#include<iostream>
using namespace std;
struct test{
	int w[10];//40个字节 
};
int main(int argc, char **argv){
	test one;
	int a[6] = {1, 2, 3, 4, 3, 9}; 
	int *ptr = (int *)(&a + 1);//地址加一就是加了16 
	cout << *(ptr - 1) << endl;
	cout << &a << endl << &a + 1 << endl << &a + 2 << endl;
	
	cout << "************************" << endl;
	cout << &one << endl << &one + 1 << endl << &one + 2 << endl;
	 
	
	//&a是把数组看成一个整体，&a+1就是跳过
	//数组的长度指向最后一个数字的下一个整型。
	//*(ptr-1)就在再后退一个整型，也就是数组的
	//最后一个元素。
} 

