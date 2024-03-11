import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Main. */
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int[][] a=new int[n][n];
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    a[i][j]=sc.nextInt();
                }
            }
            //System.out.println(solve(a,n).toString());
            solve(a,n);
        }    
    }
    public static void solve(int[][] a,int n){
        List<Integer> res=new ArrayList<>();
        int dir=0;
        int i=0,j=0,minr=0,minc=0,maxr=n-1,maxc=n-1;
        while(i>=minr && j>=minc && i<=maxr && j<=maxc){
            res.add(a[i][j]);
            if(dir==0){
                if(j==maxc){
                    dir++;i++;minr++;
                }else{
                    j++;
                }
            }else if(dir==1){
                if(i==maxr){
                    dir++;j--;maxc--;
                }else{
                    i++;
                }
            }else if(dir==2){
                if(j==minc){
                    dir++;i--;maxr--;
                }else{
                    j--;
                }
            }else{
                if(i==minr){
                    dir++;j++;minc++;
                }else{
                    i--;
                }
            }
            dir%=4;
        }
        for(int e:res){
            System.out.print(e+" ");
        }
        System.out.println();
    }
}