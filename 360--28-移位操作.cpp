#include<iostream>
using namespace std;
int fun(int a){
	a = (1 << 5) - 1;//1����5λ 32 - 1 
	return a;
}
int main(){
	cout << fun(20) << endl; 
	return 0;
}
