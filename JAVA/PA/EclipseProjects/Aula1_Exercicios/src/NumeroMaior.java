import java.util.Scanner;

public class NumeroMaior {
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		int num1;
		int num2;
		
		WriteLine("Introduz um número: ");
		
		num1 = scan.nextInt();
		
		WriteLine("Introduz outro número: ");
		
		num2 = scan.nextInt();
		
		if (num1 > num2){
			WriteLine("O número " + num1 + " é maior.");
		}
		else{
			WriteLine("O número " + num2 + " é maior.");
		}
		scan.close();
	}
	
	public static void WriteLine(String StringToDisplay)
	{
		System.out.println(StringToDisplay);
	}

}
