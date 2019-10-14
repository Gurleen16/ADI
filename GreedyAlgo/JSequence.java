import java.util.*;

class Job implements Comparable<Job>{
	public char id;
	public int profit;
	public int deadline;
	public Job(){

	}
	public Job(char a,int b,int c){
		id=a;
		deadline=b;
		profit=c;
	}

	public int compareTo(Job j){
		if(profit>j.profit)
			return 1;
		else if(profit==j.profit)
			return 0;
		else
			return -1;
	}
}

class JSequence{


	public static void findJobSequence(Job arr[],int n){
//		ArrayList<Job> al=new ArrayList<>();
//		for(int i=0;i<n;i++)
//			al.add(arr[i]);
		Arrays.sort(arr);
		boolean seq[]=new boolean[n];
		int result[]=new int[n];
		for(int i=0;i<n;i++)
			seq[i]=false;

		for(int i=0;i<n;i++){
			for(int j=(n<arr[i].deadline?n:arr[i].deadline)-1;j>=0;j--){
				if(seq[j]==false){
					result[j]=i;
					seq[j]=true;
					break;
				}
			}
		}

		for(int i=0;i<n;i++)
			if(seq[i])
				System.out.println(arr[i].id);
	}

	public static void main(String args[]){
		Job arr[]=new Job[5];
		arr[0]=new Job('a',2,100);
		arr[1]=new Job('b',1,19);
		arr[2]=new Job('c',2,27);
		arr[3]=new Job('d',1,25);
		arr[4]=new Job('e',3,15);
		findJobSequence(arr,5);
	}
}
