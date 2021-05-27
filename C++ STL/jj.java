import java.util.Scanner;
public class jj {
    
    static int add(int a,int b)
    {
        int sum=a+b;
        return sum;
    }
    public static void main(String[] args) {

        Scanner Scan=new Scanner(System.in);

        int a=Scan.nextInt();
        int b=Scan.nextInt();
        int c=add(a,b);
        System.out.println(c);



 
    }
    
}