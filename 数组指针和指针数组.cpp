#include <iostream>
using namespace std;
int main(int len,char ** args){
	int a[]={1,2,3,4,5};
	int(*b)[5]=&a;
	//b++�Ĳ���Ϊ5��b++�ƶ���5��int�ĳ���
	for(int i=0;i<5;i++,b++){
		cout<<a+i<<"--->"<<*(a+i)<<endl; 
		cout<<b<<"<--->"<<*(*b)<<endl;
	}
	return 0;
} 
