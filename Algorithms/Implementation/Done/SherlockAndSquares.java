//https://www.hackerrank.com/challenges/sherlock-and-squares/
import java.util.Scanner;
import static java.lang.System.out;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int T = in.nextInt();
        in.nextLine();
        int i, j, k, ans, temp, a, b;
        for(i=0;i<T;i++)
        {
            a=in.nextInt();
            b=in.nextInt();
            j=(int)Math.sqrt(a);
            k=(int)Math.sqrt(b);
            ans=k-j;
            if(j*j==a)
                ans++;
            out.println(ans);
        }
        

    }
}
