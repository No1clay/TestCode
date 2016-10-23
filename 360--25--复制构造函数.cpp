#include<iostream>
using namespace std;
class MyClass{
	public:
		MyClass(int i = 0){
			cout << i;
		}
		MyClass(const MyClass &x){
			cout << 2;
		}
		MyClass &operator = (const MyClass &x){
			cout << 3;
			return *this;
		}
		~MyClass(){
			cout << 4;
		}
};
int main(){
	MyClass obj1(1), obj2(2);
	MyClass obj3 = obj1;
	//obj3 = obj2;   利用对象进行初始化另一个对象的时候调用复制构造函数 
	return 0;
}
