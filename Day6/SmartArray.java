package array;
import java.util.*;
public class SmartArray {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n=3, choice;
		int c=0;
		int a[] = new int[n];
		int b[];
		int i=0;
		while(c<100) {
			System.out.println("Enter 1.insert 3.display 4.exit");
			choice = sc.nextInt();
			switch(choice) {
			
			case 1:
				
				if(i<n)
				{
					a[i] = sc.nextInt();
					i++;
					
				}
				else
				{	
					n=n+1;
					b = new int[n];
					for(int j=0;j<a.length;j++)
					{
						b[j] = a[j];
						
					}
					
					a = new int[n];
					for(int j=0;j<n;j++)
					{
						a[j] = b[j];
						
					}
					a[i] = sc.nextInt();
					i++;
					
				}
				break;
				
			case 2:
				for(int j=0;j<a.length-1;j++)
					{
						a[j] = a[j+1];
				
						}
				n = n-1;
				break;
//			case 3:
//				for(int j=0;j<a.length;j++)
//				{
//					System.out.println(a[j]);
//				}
//				break;
				
			case 4:
				return;
				
			}
			c++;
				
		}

	}

}
