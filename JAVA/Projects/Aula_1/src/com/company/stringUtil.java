package com.company;

public class stringUtil {

    public static void main(String[] args) {

        String s = "INFORmatica";

        System.out.println("String: " + s);
        System.out.println("String em maisculas: " + s.toUpperCase());
        System.out.println("String em minusculas: " + s.toLowerCase());
        System.out.println("Comprimento da String: " + s.length());
        System.out.println("Primeiro Caracter String: " +s.charAt(0));
        System.out.println("Segundo Caracter String: " + s.charAt(1));
        System.out.println("Terceiro Caracter String: " + s.charAt(2));
        System.out.println("Imprimir letra FORM: " + s.subSequence(2, 6));
    }
}
