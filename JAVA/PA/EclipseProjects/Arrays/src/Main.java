import java.util.Scanner;

public class Main {

		public static void main(String[] args) {
			
			int[] tabuada = new int[10];
			int i = 0;
			int n;
			
			Scanner scan = new Scanner(System.in);
			
			System.out.println("Insert a number!");
			n = scan.nextInt();
			
			for ( i = 1; i <= tabuada.length; i++) {
				tabuada[i-1] = n * i;
				System.out.println("\nO Resultado da multiplica��o de " + n + " x " + i + " � " + tabuada[i-1]);
				}
			
			scan.close();
			
		}
}
