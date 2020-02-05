package com.company;

import java.util.Scanner;

public class Ficha1_1 {

    private static Scanner sc = new Scanner(System.in);
    private static int num1, num2;

    public static void main(String[] args) {
        num1 = Obtem_numero();
        num2 = Obtem_numero();
        sc.close();
        Calcula();
        Mostra_resultado();
    }

    public static int Obtem_numero(){
        System.out.println("Introduza um número");
        int n = sc.nextInt();
        return n;
    }

    public static void Calcula(){
        if (num1 >= num2) {
            num1 += num2;
        } else {
            num1 *= num2;
        }
    }

    public static void Mostra_resultado(){
        System.out.println("Resultado " + num1);
    }
}
