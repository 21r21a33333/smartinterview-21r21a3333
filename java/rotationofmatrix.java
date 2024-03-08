import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Main. */
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int k=1;k<=t;k++){
            int n=sc.nextInt();
            int[][] a=new int[n][n];
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    a[i][j]=sc.nextInt();
                }
            }
            System.out.println("Test Case #"+k+":");
            rotate(a,n,t);
        }
    }
    public static void rotate(int[][] a,int n,int t){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
        }
        for(int i=0;i<n;i++){
            int s=0;
            int e=a[i].length-1;
            while(s<e){
                int temp=a[i][s];
                a[i][s]=a[i][e];
                a[i][e]=temp;
                s++;e--;
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }
    }
}