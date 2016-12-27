#include<iostream>
using namespace std;
int find(int * arr,int end);
int findMin(int *arr,int len){
	int start=0;
	int end=len-1;
	if(arr==0||len==0){
		throw "error";
	}
		int index=(start+end)/2;
		while(start+1<end){
		if(*(arr+index)==*(arr+start)&&*(arr+index)==*(arr+end)){
			return find(arr+start,end);
		}
		if(*(arr+index)>=*(arr+start) ){
			start=index;
		}
		if(*(arr+index)<=*(arr+end)){
			end=index;
		}
		index=(start+end)/2;
		}
	return *(arr+end);	
}
int find(int * arr,int end){
	int v=*arr;
	for(int i=1;i<=end;i++){
		if(*(arr+i)<v){
			v=*(arr+i);
		}
	}
	return v;
}
int main(int len,char* argue[]){
int arr[]={1,1,0,1,1,1,1};
cout<<findMin(arr,7)<<endl;	
}
