import java.util.Scanner;

public class NumeroMaior {
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		int num1;
		int num2;
		
		WriteLine("Introduz um n�mero: ");
		
		num1 = scan.nextInt();
		
		WriteLine("Introduz outro n�mero: ");
		
		num2 = scan.nextInt();
		
		if (num1 > num2){
			WriteLine("O n�mero " + num1 + " � maior.");
		}
		else{
			WriteLine("O n�mero " + num2 + " � maior.");
		}
		scan.close();
	}
	
	public static void WriteLine(String StringToDisplay)
	{
		System.out.println(StringToDisplay);
	}

}
