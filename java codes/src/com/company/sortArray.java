package com.company;

import java.util.Scanner;

public class sortArray {
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
            for (int j = i+1; j < n; j++){
                if (arr[i]>arr[j]){
                    arr[i] = arr[i] + arr[j];
                    arr[j] = arr[i] - arr[j];
                    arr[i] = arr[i] - arr[j];
                }
            }
            System.out.print(arr[i]+"; ");
        }
    }
}
