#include<iostream>
using namespace std;
//�����͸����Ķ����Ʊ�ʾ��һ�����������÷���洢 ������ԽС��1Խ�� 
//����ⷨ
//���ù��������ֵ�������ͨ�������������һ��������ʵ�� 
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
//����ⷨ
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
