import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Main. */
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int k=1;k<=t;k++){
            int n=sc.nextInt();
            System.out.println("Case #"+k+":");
            n++;
            int mid=n/2;
            int i=0,j=0;
            for(i=1;i<=mid;i++){
                for(j=1;j<=mid-i;j++)
                    System.out.print(" ");
                if(i==1){
                    System.out.print("* ");
                }else{
                    System.out.print("* ");
                    for(j=1;j<2*i-3;j++){
                        System.out.print(" ");
                    }
                    System.out.print("*");
                }
                for(j=1;j<mid-i;j++){
                    System.out.print(" ");
                }
                System.out.println();
            }
            for(i=mid+1;i<n;i++){
                for(j=1;j<=i-mid;j++)
                    System.out.print(" ");
                if(i==n-1){
                    System.out.print("*");
                }else{
                    System.out.print("*");
                    for(j=1;j<=2*(n-i)-3;j++){
                        System.out.print(" ");
                    }
                    System.out.print("*");
                }
                for(j=1;j<=i-mid;j++)
                    System.out.print(" "); 
                System.out.println();
            }
           

    }
}
}