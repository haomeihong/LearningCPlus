#include<iostream>
#include<queue>
#include<exception>
using namespace std;
template<typename T> class DefStack{
public:
	DefStack(){
	};
	~DefStack(){
	};
	void push(const T& node);
	T pop();
private: 
	queue<T> que1;
	queue<T> que2;
};
template<typename T> void DefStack<T>::push(const T& node){
	if(que1.empty()&&que2.empty()){
		que1.push(node); 
	}else if(!que1.empty()){
		que1.push(node); 
	}else{
		que2.push(node); 
	}
}
template<typename T> T DefStack<T>::pop(){
	
	if((!que1.empty()&&!que2.empty())||(que1.empty()&&que2.empty())){
		throw "´íÎó"; 
	}else if(que1.empty()){
	while(que2.size()>1){
		T& top=que2.front();
		que2.pop();
		que1.push(top);
	}
	T& top=que2.front();
	que2.pop();
	return top;
	}else{
	while(que1.size()>1){
		T& top=que1.front();
		que1.pop();
		que2.push(top);
	}
	T& top=que1.front();
	que1.pop();
	return top;	
	}
	
}
int main(){
	DefStack<int> sta;
	for(int i=0;i<10;i++){
		sta.push(i);
	}
	for(int i=0;i<10;i++){
		cout<<sta.pop()<<endl;
	}
}
