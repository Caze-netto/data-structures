package com.caze.arrays;

import java.util.Arrays;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Define o tamanho do array
        System.out.print("Enter the size of the array: ");
        int n = sc.nextInt();

        int[] array = new int[n]; // n contiguous spaces allocated in memory

        // Preenche o array com valores de 0 até n-1
        for (int i = 0; i < array.length; i++) {
            array[i] = i;
        }

        // Pede ao usuário um valor para buscar
        System.out.print("Enter a number you want to find (between 0 and " + (n - 1) + "): ");
        int target = sc.nextInt();

        boolean found = false;
        int steps = 0;

        // Busca linear O(n)
        for (int j = 0; j < array.length; j++) {
            steps++; // conta quantos elementos foram verificados
            if (array[j] == target) {
                System.out.println("It took " + steps + " steps to find the value: " + array[j]);
                found = true;
                break; // para a busca
            }
        }

        if (!found) {
            System.out.println("The value " + target + " was not found in the array.");
        }

        // Mostra o conteúdo do array
        System.out.println("Array contents: " + Arrays.toString(array));

        // Mostra identificador do objeto (não é endereço real de memória)
        System.out.println("Java doesn't allow direct memory access, so this is the object reference in hexadecimal: " + array);

        sc.close(); // fecha o scanner
    }
}