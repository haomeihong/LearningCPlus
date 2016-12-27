#include<iostream>
using namespace std;
//通过除法计算 
//注意正数和负数的取余运算是保留符号的 
int fun(int n){
	int result=0;
	if(n<0){
		result=1;
		n=-n;
	}
	while(n!=0){
		if(n%2==1){
			result++;
		}
		n=n/2;
	} 
	return result;
}
//通过移位计算 
int fun2(int n){
	int result=0;
	if(n<0){
		result=1;
		n=-n;
	}
	while(n!=0){
		if(n%2==1){
			result++;
		}
		n>>=1;
	} 
	return result;
}
int main(int len,char * arg[]){
//int n;
//cin>>n;
cout<<fun(-9)<<endl;
return 0;	
}
