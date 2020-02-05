package com.company;

import java.util.Scanner;

public class Imc {
    static int num1;
    static int num2;
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        Mostra_resultado();
    }

    public static int[] Obtem_numero() {
        System.out.print("Introduza um número ");
        num1 = sc.nextInt();
        System.out.print("Introduza um número ");
        num2 = sc.nextInt();
        return new int[]{num1, num2};
    }

    public static void Calcula() {
        Obtem_numero();
        if (num1 >= num2) {
            num1 = num1 + num2;
        } else {
            num1 = num1 * num2;
        }
    }

    public static void Mostra_resultado() {
        Calcula();
        System.out.print("Resultado " + num1);
    }

}
}
