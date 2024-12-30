import java.io.*;
import java.util.*;

public class Solution {
    
    static int breadth, height;

    static {
        Scanner sc = new Scanner(System.in);
        breadth = sc.nextInt();
        height = sc.nextInt();
        if (breadth <= 0 || height <= 0) {
            System.out.println("java.lang.Exception: Breadth and height must be positive");
            System.exit(0);
        }
    }

    public static void main(String[] args) {
        int area = breadth * height;
        System.out.println(area);
    }
}

