#include<iostream>
#include<stack>
#include<exception>
using namespace std;
template<typename T> class DefQueue{
public:
	DefQueue(void){};
	~DefQueue(void){};
	void appendTail(const T& node);
	T deleteHead();
private:
	stack<T> stack1;
	stack<T> stack2; 
} ;
template<typename T>void DefQueue<T>::appendTail(const T& node){
	stack1.push(node); 
}
template<typename T> T DefQueue<T>::deleteHead(){
	if(stack2.size()<=0){
		while(stack1.size()>0){
			T& data=stack1.top();
			stack1.pop();
			stack2.push(data); 
		}
	} 
	if(stack2.size()==0){
		throw "empty";
	}
	T head=stack2.top();
	stack2.pop();
	return head;
}
int main(int len,char* arg[]){
	DefQueue<int> que;
	for(int i=1;i<10;i++){
	que.appendTail(i);
	}
	for(int i=1;i<10;i++){
	cout<<que.deleteHead()<<endl;
	}
	return 0;
}
