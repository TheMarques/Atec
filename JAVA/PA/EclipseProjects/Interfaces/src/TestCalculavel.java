import java.util.Scanner;

public class TestCalculavel {

	public static void main(String[] args) {
		@SuppressWarnings("resource")
		Scanner scan = new Scanner(System.in);
		
		Calculavel[] operacoes = new Calculavel[4];
		
		operacoes[0] = new Soma();
		operacoes[1] = new Subtracao();
		operacoes[2] = new Multiplicacao();
		operacoes[3] = new Divisao();
		
		int x, y;
		
		int [] r = new int[4];
		
		System.out.println("Welcome to the Mathlab!");
		System.out.println("Please insert one number");
		x = scan.nextInt();
		System.out.println("Please insert another number");
		y = scan.nextInt();
		
		for (int i = 0; i < operacoes.length; i++){
			r[i] = operacoes[i].calcular(x,y);
		}
		

		System.out.println("The result of the sum of the two numbers is " + r[0]);
		System.out.println("The result of the subtraction of the two numbers is " + r[1]);
		System.out.println("The result of the multiplication of the two numbers is " + r[2]);
		System.out.println("The result of the division of the two numbers is " + r[3]);
	}

}
