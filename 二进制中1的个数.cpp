#include<iostream>
using namespace std;
//正数和负数的二进制表示不一样，负数采用反码存储 ，负数越小，1越多 
//常规解法
//不用管输入数字的正负，通过定与运算的另一操作数来实现 
int fun1(int n){
	int result=0;
	unsigned int f=1;
	while(f){
		if(f&n){
			result++;
		}
		f<<=1;
	}
	return result;
} 
//经典解法
int fun(int n){
	int result=0;
	while(n){
		result++;
		n=n&(n-1);
	}
	return result;
} 
int main(int len,char * arg[]){
//int n;
//cin>>n;
cout<<fun1(-1)<<endl;
return 0;	
}
