//https://www.hackerrank.com/challenges/fibonacci-modified
import java.math.BigInteger;
import static java.lang.System.out;
import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);

        BigInteger a,b, ans;
        int aa, bb;
        int n;
        aa=in.nextInt();
        bb=in.nextInt();
        n=in.nextInt();
        n-=2;

        a=BigInteger.valueOf(aa);
        b=BigInteger.valueOf(bb);
        ans=BigInteger.valueOf(0);

        for(int i=0;i<n;i++)
        {
            ans=b.multiply(b);
            ans=ans.add(a);
            a=b;
            b=ans;
        }
        out.println(ans);
    }
}
