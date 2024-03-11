import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Main. */
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int k=1;k<=t;k++){
            int n=sc.nextInt();
            int z=1;
            System.out.println("Case #"+(k)+":");
            for(int i=0;i<n;i++){
                for(int j=0;j<n-i-1;j++){
                    System.out.print(" ");
                }
                for(int j=0;j<=i;j++){
                    System.out.print("*");
                }
                System.out.println();
            }
            //z++;
        }
    }
}