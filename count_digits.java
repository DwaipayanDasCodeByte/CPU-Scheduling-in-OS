//To count the number of digits
import java.util.Scanner;

public class count_digits {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number:");
		int n = sc.nextInt();
		int count =0;
		while(n!=0) {
		   n = n/10;
		  count++;	
		}
		System.out.println("The number of digits are: "+count);

	}

}
