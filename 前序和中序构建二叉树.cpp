#include<iostream>
using namespace std;
struct BinaryTreeNode{
int m_value;
BinaryTreeNode * leftNode;
BinaryTreeNode * rightNode;
}; 
BinaryTreeNode * ConstructCore(int* pre_start,int *pre_end,int * in_start,int * in_end);
BinaryTreeNode * ConstructTree(int * pre,int * in,int length){
	if(pre==NULL||in==NULL||length<=0){
		return NULL;
	}
	return ConstructCore(pre,pre+length-1,in,in+length-1);
}

BinaryTreeNode * ConstructCore(int* pre_start,int *pre_end,int * in_start,int * in_end){
	int rootValue=pre_start[0];
	BinaryTreeNode * root=new BinaryTreeNode();
	root->m_value=rootValue;
	root->leftNode=root->rightNode=NULL;
	//只有一个节点 
	if(pre_start==pre_end){
	if(in_start==in_end&&*pre_start==*in_start){
		return root;
	}else{
		throw -1;
	}
	}
	//寻找中序遍历的根节点
	int * in_root=in_start;
	while(in_root<=in_end&&*in_root!=rootValue) {
		in_root++;
	}
	//已经越界 
	if(in_root>in_end){
		throw -1;
	}
	int leftLength=in_root-in_start;
	int * pre_left_end=pre_start+leftLength;
	//构建左子树 
	if(leftLength>0){
		root->leftNode= ConstructCore(pre_start+1,pre_left_end,in_start,in_root-1);
	}
	if(leftLength<pre_end-pre_start){
		root->rightNode=ConstructCore(pre_left_end+1,pre_end,in_root+1,in_end);
	} 
	return root;
}
void readTree(BinaryTreeNode * root){
	if(root==NULL){
	cout<<"空节点"; 
	return;
	}
	cout<<root->m_value;
	if(root->leftNode!=NULL){
	readTree(root->leftNode);	
	}
	if(root->rightNode!=NULL){
	readTree(root->rightNode);
	}
}
int main(int len,char *arg[]){
int pre_arr[8];
int in_arr[8];
for(int i=0;i<8;i++){
	scanf("%d",pre_arr+i);
}
for(int i=0;i<8;i++){
	scanf("%d",in_arr+i);
}
BinaryTreeNode * root=ConstructTree(pre_arr,in_arr,8);
readTree(root); 
return 0;
}


