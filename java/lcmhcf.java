import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Main. */
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            long a=sc.nextLong();
            long b=sc.nextLong();
            long h=gcd(a,b);
            long l=lcm(a,b,h);
            System.out.println(l+" "+h);
        }
    }
    static long gcd(long a,long b){
        if (a==0)
        return b;
        return gcd(b%a,a);
    }
    static long lcm(long a,long b,long l){
        return (a/gcd(a,b))*b;
    }
}