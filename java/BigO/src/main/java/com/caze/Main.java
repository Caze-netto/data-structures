package com.caze;

import java.util.Arrays;

public class Main{

    public static void main(String[] args){

        int[] array = new int[10];
        int cont = 0;

        for(int i=0;i<array.length;i++){
            array[i]= i;
        }

        for (int j = 0; j < array.length; j++) {
            //O(n) independente se tiver 1000 elementos
            // e tiver que procurar o elemento 423 ainda é O(n)
            if (array[j] == 9) {
                System.out.println("Foram " + cont + " elementos para achar o valor: " + array[j]);
            }else{
                cont += 1;
            }
        }

        System.out.println(Arrays.toString(array));
    }
}