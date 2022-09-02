import java.util.Scanner;
class AreaOfRectangle {
   public static void main (String[] args)
   {
	   Scanner scanner = new Scanner(System.in);
	   System.out.println("Enter the length of Rectangle:");
	   double length = scanner.nextDouble();
	   System.out.println("Enter the width of Rectangle:");
	   double width = scanner.nextDouble();
	   //Area = length*width;
	   double area = length*width;
	   System.out.println("Area of Rectangle is:"+area);
   }
}