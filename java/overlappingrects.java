import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
       
        /* Enter your code here. Read input from STDIN. Prlong output to STDOUT. Your class should be named Main. */
        Scanner sc=new Scanner(System.in);
        long t=sc.nextLong();
        while(t-->0){
            long ans = 0;
            long ax1=sc.nextLong();
            long ay1=sc.nextLong();
            long ax2=sc.nextLong();
            long ay2=sc.nextLong();
            long bx1=sc.nextLong();
            long by1=sc.nextLong();
            long bx2=sc.nextLong();
            long by2=sc.nextLong();
            long a1=(ax2-ax1)*(ay2-ay1);
            long a2=(bx2-bx1)*(by2-by1);
            long x5=Math.max(ax1,bx1);
            long y5=Math.max(ay1,by1);
            long x6=Math.min(ax2,bx2);
            long y6=Math.min(ay2,by2);
            long x=x6-x5;
            long y=y6-y5;
            long a3=x*y;
            if(x<0 || y<0){
                a3=0;
            }
            ans=a1+a2-a3;
            System.out.println(ans);

        }
    }
}