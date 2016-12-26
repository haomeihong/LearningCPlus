#include<iostream>
using namespace std;
int findMin(int *arr,int len){
	int start=0;
	int end=len-1;
	if(arr==0||len==0){
		throw "error";
	}
		int index=(start+end)/2;
		while(start+1<end){
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
int main(int len,char* argue[]){
int arr[]={3,4,5,6,7,0,1,2};
cout<<findMin(arr,8)<<endl;	
}
