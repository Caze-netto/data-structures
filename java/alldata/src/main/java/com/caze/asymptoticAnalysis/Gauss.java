package com.caze.asymptoticAnalysis;

public class Gauss {

    public static void main(String[] args) {
        int n = 10000; // Pode aumentar para testar, mas cuidado com loop(n) que é O(n^2)

        // Medindo gauss
        long start = System.nanoTime();
        int resultGauss = gauss(n);
        long end = System.nanoTime();
        System.out.println("gauss(" + n + ") = " + resultGauss + " | Tempo: " + (end - start) + " ns");

        // Medindo notGauss
        start = System.nanoTime();
        int resultNotGauss = notGauss(n);
        end = System.nanoTime();
        System.out.println("notGauss(" + n + ") = " + resultNotGauss + " | Tempo: " + (end - start) + " ns");

        // Medindo loop
        start = System.nanoTime();
        int resultLoop = loop(n);
        end = System.nanoTime();
        System.out.println("loop(" + n + ") = " + resultLoop + " | Tempo: " + (end - start) + " ns");
    }

    /**
     * Soma de 1 até n usando a fórmula de Gauss
     * ------------------------------------------
     * Operações:
     *   - Multiplicação (n * (n+1))
     *   - Divisão por 2
     * Complexidade:
     *   - Não depende de n, sempre são 3 operações -> O(1) -> constante
     * Observação assintótica:
     *   - Crescimento do tempo é constante mesmo se n aumentar infinitamente
     */
    public static int gauss(int n) {
        return n * (n + 1) / 2;
    }

    /**
     * Soma de 1 até n usando um loop simples
     * ---------------------------------------
     * Operações:
     *   - Um loop de 1 até n
     *   - Em cada iteração, uma soma e incremento
     * Complexidade:
     *   - Loop roda n vezes -> O(n) -> linear
     * Observação assintótica:
     *   - Tempo cresce proporcionalmente a n
     *   - Se n dobrar, o tempo de execução aproximadamente dobra
     */
    public static int notGauss(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        return sum;
    }

    /**
     * Loop aninhado para calcular soma triangular
     * --------------------------------------------
     * Operações:
     *   - Loop externo de 1 até n
     *   - Loop interno de 1 até i (i depende do loop externo)
     *   - Total de incrementos = 1 + 2 + ... + n = n(n+1)/2
     * Complexidade:
     *   - O(n^2) -> quadrática
     * Observação assintótica:
     *   - Tempo cresce muito rápido à medida que n aumenta
     *   - Se n dobrar, tempo aumenta ~ 4x (porque 2^2 = 4)
     *   - Esse tipo de algoritmo não escala bem para n grandes
     */
    public static int loop(int n) {
        int num = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                num++;
            }
        }
        return num;
    }
}