#include <iostream>
using namespace std;
int main(int len,char ** args){
	int a[]={1,2,3,4,5};
	int(*b)[5]=&a;
	//b++的步长为5；b++移动了5个int的长度
	for(int i=0;i<5;i++,b++){
		cout<<a+i<<"--->"<<*(a+i)<<endl; 
		cout<<b<<"<--->"<<*(*b)<<endl;
	}
	return 0;
} 
