package com.company;

import java.util.Scanner;

public class Pergunta3 {

    private static Scanner sc = new Scanner(System.in);
    private static int num1, num2, a;

    public static void main(String[] args) {
        a = 2;
        Le_Valores();
        num1 = Calcula(a, num1,num2);
        Mostra_resultado();
        sc.close();
    }

    public static void Le_Valores(){
        num1 = Le_Numero();
        num2 = Le_Numero();
    }

    public static int Le_Numero(){
        int numero;
        System.out.print("Introduza um número ");
        numero = sc.nextInt();
        return numero;
    }

    public static int Calcula(int a1, int n1, int n2){
        if (n2 >= 0) {
            n2--;
            n1 = n2+2;
        } else {
            n2++;
            n1 = n2-2;
        }
        num2 = n2;
        return n1;
    }

    public static void Mostra_resultado(){
        System.out.println("Resultados: num1 = " + num1 + " num 2 = " + num2);
    }
}
