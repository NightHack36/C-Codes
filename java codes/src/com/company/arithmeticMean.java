package com.company;

import java.util.Scanner;

public class arithmeticMean {
    public static void main(String[] args) {
        // code below will calculate the arithmetic means of pairs' elements
        Scanner in = new Scanner(System.in);
        System.out.print("n = ");
        int n = in.nextInt();
        float arr[] = new float[n];
        for (int i = 0; i < n; i++){
            System.out.print("arr["+i+"] = ");
            arr[i] = in.nextInt();
        }
        System.out.println("Array of arithmetic means: ");
        for (int i = 0; i < n-1; i++) {
            System.out.print((arr[i]+arr[i+1])/2 + "; ");
        }
        }
    }

