import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int i=0;
        while (sc.hasNext()) {
            ++i;
            String s=sc.nextLine();
            System.out.println(i + " " + s);
        }
    }
}
