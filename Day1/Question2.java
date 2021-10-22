package Day1;

import java.util.Scanner;

public class Question2 {

	
	public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int n;
	System.out.println("Enter the number of elements");
	n = sc.nextInt();
	int a[] = new int[n];
	System.out.println("Enter the elements");
	for(int i=0;i<n;i++)
	{
		a[i] = sc.nextInt();
	}
	sc.close();
	int f[] = new int[n];
	int p[] = new int[n];
	int c = 0;
	for(int i=0;i<n;i++)
	{
		f[a[i]]++;
		if(f[a[i]] == 1)
		{
			p[c] = a[i];
			c++;
		}
	}
	for(int i=0;i<c;i++)
	{
		System.out.println("The frequency of "+p[i]+" is: "+f[a[i]]);
	}
	

	}

}
