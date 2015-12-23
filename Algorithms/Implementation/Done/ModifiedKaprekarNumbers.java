//https://www.hackerrank.com/challenges/kaprekar-numbers
import static java.lang.System.out;
import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int p, q;
        p=in.nextInt();
        q=in.nextInt();
        int i, j, k;
        long ans, square;

        int visit=0;
        for(i=p;i<=q;i++)
        {
            if(iskaprekar((long)i*i, i)>0)
            {
                out.print(i+" ");
                visit++;
            }
        } 
        if(visit==0)
            out.print("INVALID RANGE");
    }
    static int iskaprekar(long i, int original)
    {
        if(original==10)
            return 0;
        if(original==1)
            return 1;
        long a, b;
        a=b=0;
        int count=0;
        long temp;
        temp=i;
        while(temp>0)
        {
            count++;
            temp/=10;
        }
        
        temp=i;
        int lim=(count+1)/2;
        int j, k;
        for(j=0;j<lim;j++)
        {
            b=(temp%10)*(long)Math.pow(10, j)+b;
            temp/=10;
        }
        a=temp;
        //out.println(a+"x"+b+"sq"+i);

        if(a+b == original){
            if(a!=0 && b!=0)
                return 1;
            else
                return 0;
        }
        else{

            return 0;
        }
    }
}
