#include<iostream>
#include<algorithm>
using namespace std;
int randomInRange(int start,int end){
	//易错点：rand产生的随机数不是0~1 
	int result=(int)(rand()%(end-start+1)+start);
	return result; 
}
int Partition(int data[],int length,int start,int end){
	if(data==NULL||length<=0||start<0||end>=length){
		throw "错误";
	}
	int index=randomInRange(start,end);
	swap(data[index],data[end]);
	int small=start-1;
	for(index=start;index<end;index++){
		if(data[index]<data[end]){
			small++;
			if(small!=index){
				swap(data[index],data[small]);
			}
		}
	}
	small++;
	swap(data[small],data[end]);
	return small;
}
void QuickSort(int data[],int length,int start,int end){
	if(start==end){
		return;
	}
	int index=Partition(data,length,start,end);
	if(index>start){
		QuickSort(data,length,start,index-1); 
	} 
	if(index<end){
		QuickSort(data,length,index+1,end); 
	}
}
int main(){
	int a[]={1,9,4,7,11,2,3};
	QuickSort(a,7,0,6); 
	for(int i=0;i<7;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
