package com.company;

import java.util.Scanner;

public class Main{

    static Scanner sc = new Scanner(System.in);
    static float peso, altura, imc;

    public static void main(String []args){
        Ler_Peso_Altura();
        imc = Calcula_IMC(peso, altura);
        System.out.println("IMC = " + imc);
        Significado_IMC(imc);
        sc.close();
    }

    public static void Ler_Peso_Altura(){
        System.out.print("Qual o Peso? ");
        peso = sc.nextFloat();
        System.out.print("Qual a Altura? ");
        altura = sc.nextFloat();
    }
    public static float Calcula_IMC(float p,float a){
        float imc;
        imc = p / (a*a);
        return imc;
    }

public static void Significado_IMC(float imc) {
    if (imc < 18.5) {
        System.out.println("Abaixo do peso ideal");
    } else if (imc < 24.9) {
        System.out.println("Parabéns - peso normal!");
    } else if (imc < 29.9) {
        System.out.println("Acima do seu (sobrepeso)");
    } else if (imc < 34.9) {
        System.out.println("Obesidade grau I");
    } else if (imc < 39.9) {
        System.out.println("Obesidade grau II");
    } else {
        System.out.println("Obesidade grau I");
    }
}
}