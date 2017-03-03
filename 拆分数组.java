

import java.util.Arrays;
/**
 * 拆分数组，拆分成4部分，使每部分的数字和相同
 * 如 2 5 1 1 1 4 7 7---->7  7  5,2  4,1,1,1
 * @author xiaomiwa
 *
 */
public class AddTwoNum {
	static boolean fun(int[] arr){
		int sum=0;
		for(int i:arr){
			sum+=i;
		}
		if(sum%4!=0){
			return false;
		}
		int div=sum/4;
		Arrays.sort(arr);
		StringBuffer bf=new StringBuffer();
		for(int h=0,b=arr.length-1,curr=0;h<b;){
			if(arr[b]>div){
				return false;
			}else if(arr[b]==div){
				bf.append(arr[b]).append("\n");
				b--;
			}else if(arr[b]+arr[h]+curr>div){
				return false;
			}else if(arr[b]+arr[h]+curr==div){
				bf.append(arr[h]).append(",").append(arr[b]).append("\n");
				b--;
				h++;
				curr=0;
			}else{
				bf.append(arr[h]).append(",");
				curr+=arr[h];
				h++;
			}
		}
		System.out.println("Total:"+sum+"\tDIV:"+div);
		System.out.print(bf.toString());
		return true;
	}

	public static void main(String[] args) {
		int[] arr={2,1,5,1,1,7,4,7,8};
		System.out.println(fun(arr));
		
	}

}
