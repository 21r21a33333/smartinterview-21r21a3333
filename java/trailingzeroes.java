import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Main. */
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            long n=sc.nextLong();
            System.out.println(zero(n));
        }
    }
    static long zero(long n){
        long c=0;
        for(long i=5;n/i>=1;i*=5){
            c+=n/i;
        }
        return c;
    }
}