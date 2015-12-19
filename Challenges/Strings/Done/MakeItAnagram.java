//https://www.hackerrank.com/challenges/make-it-anagram
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a, b;
        a = in.nextLine();
        b = in.nextLine();
    
        int[][] ans=new int[2][30];
        int i, j, k, sum=0;
        for(i=0;i<a.length();i++)
            ans[0][(int) a.charAt(i) - 97]++;
        for(i=0;i<b.length();i++)
            ans[1][(int) b.charAt(i) - 97]++;
        for(i=0;i<26;i++)
            sum+=Math.abs(ans[0][i]-ans[1][i]);



        System.out.println(sum);


    }
}

/*
 * Alice recently started learning about cryptography and found that anagrams are very useful. Two strings are anagrams of each other if they have same character set and same length. For example strings "bacdc" and "dcbac" are anagrams, while strings "bacdc" and "dcbad" are not.
 *
 * Alice decides on an encryption scheme involving 2 large strings where encryption is dependent on the minimum number of character deletions required to make the two strings anagrams. She need your help in finding out this number.
 *
 * Given two strings (they can be of same or different length) help her in finding out the minimum number of character deletions required to make two strings anagrams. Any characters can be deleted from any of the strings.
 *
 * Input Format 
 * Two lines each containing a string.
 *
 * Constraints 
 * 1 <= Length of A,B <= 10000 
 * A and B will only consist of lowercase latin letter.
 *
 * Output Format 
 * A single integer which is the number of character deletions.
 *
 * Sample Input #00:
 *
 * cde
 * abc
 * Sample Output #00:
 *
 * 4
 * Explanation #00: 
 * We need to delete 4 characters to make both strings anagram i.e. 'd' and 'e' from first string and 'b' and 'a' from second string.
 *
 * */
