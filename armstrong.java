//WAP in java to print armstrong number.
import java.util.*;
class armstrong
{
public static void main(String[]arr)
{
int num,rem,t,sum=0;
System.out.println("Enter any number");
Scanner w1=new Scanner (System.in);
num=w1.nextInt();
t=num;
while(num>0)
{
rem=num%10;
sum=sum+(rem*rem*rem);
num=num/10;
}
if(sum==t)
{
System.out.println("armstrong");
}else
{
System.out.println("not armstrong");
}}}