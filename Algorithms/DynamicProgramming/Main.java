//https://www.hackerrank.com/challenges/coin-change
import java.util.Scanner;
import static java.lang.System.out;
import java.util.*;
//import java.util.Arrays;

public class Main{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int n, m;
        int[] arr = new int[50];
        int[][] ans = new int[250][50];

        n=in.nextInt();
        m=in.nextInt();

        int i, j, k, temp;
        for(i=0;i<m;i++)
            arr[i]=in.nextInt();
      
        Arrays.sort(arr, 0, m);
        ans[0][0]=0;
        for(i=1;i<n;i++)
            if(i%arr[0] == 0)
                ans[i][0]=1;
        for(j=0;j<m;j++)
            ans[0][j]=0;
        for(i=1;i<=N;i++)
        {
            for(j=0;j<m;j++)
            {
                if(arr[j] > i)
                    ans[i][j]=0;
                ans[i][j] = 

// i goes from 0 to N, j goes from 0 to m-1


        //print(N, M);
        //N-arr[i], M-1  + N, M-1



    }
}
