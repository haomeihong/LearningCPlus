#include<iostream>
using namespace std;
//ͨ���������� 
//ע�������͸�����ȡ�������Ǳ������ŵ� 
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
//ͨ����λ���� 
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
