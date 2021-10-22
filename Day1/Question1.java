package Day1;

import java.util.Scanner;


public class Question1 {

	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number of elements in group");
		int n;
		n = sc.nextInt();
		int a[] = new int[n];
		
		System.out.println("Enter the elements");
		for(int i=0;i<n;i++)
		{
			a[i] = sc.nextInt();
		}
		int k =0;
		sc.close();
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i] == a[j])
				{
					k++;
					System.out.println("The elements are not distinct");
					break;
				}
			}
			
		}
		if(k==0){
			System.out.println("The elements are distinct. No Repetition.");

		}
		

	}

}
