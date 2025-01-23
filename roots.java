//Roots of quadratic equation
import java.util.Scanner;
public class roots
{
	public static void main(String[] args) {
	   int a,b,c;
	   Scanner sc = new Scanner(System.in);
	   System.out.println("Enter the numbers coeff of x^2 , x and 0");
	   a = sc.nextInt();
	   b = sc.nextInt();
	   c = sc.nextInt();
	   double r1 = (-b + Math.sqrt(b*b - 4*a*c)) / 2*a;
	   double r2 = (-b - Math.sqrt(b*b - 4*a*c)) / 2*a;
	   System.out.println("Roots of the quadratic equations are "+r1+" "+r2);
	   
	}
}
