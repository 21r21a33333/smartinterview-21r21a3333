import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Main. */
        Scanner sc=new Scanner(System.in);
        int  t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int[][] arr=new int[n][n];
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    arr[i][j]=sc.nextInt();
                }
            }
            for(int d=1-n;d<n;d++){
                int dsum=0;
                for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        if(i-j==d){
                            dsum+=arr[i][j];
                        }
                    }
                }
                System.out.print(dsum+" ");
            }
            System.out.println();
        }
    }
}