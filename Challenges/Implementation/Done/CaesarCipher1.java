//https://www.hackerrank.com/challenges/caesar-cipher-1

import java.util.Scanner;
import static java.lang.System.out;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int len = in.nextInt();
        in.nextLine();
        String s = in.nextLine();
        int shift=in.nextInt();
        shift=shift%26;

        int i, j, k, ans;
        for(i=0;i<len;i++)
        {
            int val=(int)s.charAt(i);
            if( (val >=65 && val<=90)) {
                if(val+shift > 90 )
                    val=64+ (val+shift-90);
                else
                    val+=shift;
                out.print((char) val);
                continue;
            }
            if( (val >=97 && val<=122)) {
                if(val+shift > 122 )
                    val=96+ (val+shift-122);
                else
                    val+=shift;
                out.print((char) val);
                continue;
            }
            out.print((char) val);
        }
        out.print("\n");

    }
}
