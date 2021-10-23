package com.company;

import java.util.Scanner;

public class sortArray {
//the code will replace elements of pairs in case the next element is smaller than previous
    public static void main(String[] args) {
        int n;
        Scanner in = new Scanner(System.in);
        System.out.print("n = ");
        n = in.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++){
            System.out.print("arr["+i+"] = ");
            arr[i] = in.nextInt();
        }
        System.out.println("Sorted: ");
        for (int i = 0; i < n; i++){
            if (arr[i]>arr[i+1]){
                arr[i] = arr[i] + arr[i+1];
                arr[i+1] = arr[i] - arr[i+1];
                arr[i] = arr[i] - arr[i+1];
            }
            System.out.println(arr[i]+"; ");
        }
    }
}
