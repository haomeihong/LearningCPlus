package com.haomeihong;

import java.util.ArrayList;
import java.util.List;
/**
 * 
 * @author xiaomiwa
 *
 */
public class OddNum {

	/***
	 * 求某一范围的质数
	 * @param n
	 */

	public void function(int n){
	List<Integer> list=new ArrayList<Integer>();
	list.add(2);
	list.add(3);
	for(int i=1;i<=n;i++){
		if(i<=3){
			System.out.println(i);
			continue;
		}
		boolean tag=true;
		for(int j=0;j<list.size();j++){
			if(i%list.get(j)==0){
				tag=false;
				break;
			}
		}
		if(tag){
			list.add(i);
			System.out.println(i);
		}
	}
	}

	public static void main(String[] args) {
		OddNum newone=new OddNum();
		newone.function(3);
		System.out.println("************");
		newone.function(20);

	}
	
}
