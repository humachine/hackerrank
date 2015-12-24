//https://www.hackerrank.com/challenges/the-time-in-words
import static java.lang.System.out;
import java.util.Scanner;
public class Main{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int a, b;
        a=in.nextInt();
        b=in.nextInt();

        int i, j, k;
        if(b>30)
        {
            a++;
            if(b==59)
                out.println("one minute to "+numtostr(a));
            else if(b==45)
                out.println("quarter to "+numtostr(a));
            else
                out.println(numtostr(60-b)+" minutes to "+numtostr(a));
        }
        else   
        {
            if(b==0)
                out.println(numtostr(a)+" o' clock");
            else if(b==1)
                out.println("one minute past "+numtostr(a));
            else if(b==15)
                out.println("quarter past "+numtostr(a));
            else if(b==30)
                out.println("half past "+numtostr(a));
            else
                out.println(numtostr(b)+" minutes past "+numtostr(a));
        }
    }
    static public String numtostr(int inp)
    {
        String s="";
        switch(inp)
        {
            case 1:
                s="one";
                break;
            case 2:
                s="two";
                break;
            case 3:
                s="three";
                break;
            case 4:
                s="four";
                break;
            case 5:
                s="five";
                break;
            case 6:
                s="six";
                break;
            case 7:
                s="seven";
                break;
            case 8:
                s="eight";
                break;
            case 9:
                s="nine";
                break;
            case 10:
                s="ten";
                break;
            case 11:
                s="eleven";
                break;
            case 12:
                s="twelve";
                break;
            case 13:
                s="thirteen";
                break;
            case 14:
                s="fourteen";
                break;
            case 15:
                s="fifteen";
                break;
            case 16:
                s="sixteen";
                break;
            case 17:
                s="seventeen";
                break;
            case 18:
                s="eighteen";
                break;
            case 19:
                s="nineteen";
                break;
            case 20:
                s="twenty";
                break;
            case 21:
                s="twenty one";
                break;
            case 22:
                s="twenty two";
                break;
            case 23:
                s="twenty three";
                break;
            case 24:
                s="twenty four";
                break;
            case 25:
                s="twenty five";
                break;
            case 26:
                s="twenty six";
                break;
            case 27:
                s="twenty seven";
                break;
            case 28:
                s="twenty eight";
                break;
            case 29:
                s="twenty nine";
                break;
            case 30:
                s="half";
                break;
        }
        return s;
    }

}
