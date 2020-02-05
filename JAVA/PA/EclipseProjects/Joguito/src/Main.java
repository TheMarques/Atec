import java.util.Scanner;
import java.text.DecimalFormat;
import java.util.Random;

public class Main {
	
	// Inicia o programa, chamando método jogar.
	@SuppressWarnings("resource")
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		Random rng = new Random();
		DecimalFormat df2 = new DecimalFormat("#.##");
		
		
		double[] numbers;
		int playerNr;
		double input;
		int option = 0;
		double maxValue = 5;
		double minValue = -5;
		
		System.out.println("Welcome to Random Generated Fights");
		
		do{
			System.out.println("\n**************************************");
			System.out.println("\tMain Menu");
			System.out.println("\t1- Start");
			System.out.println("\t2- Rules");
			System.out.println("\t3- Exit");
			System.out.println("\n");
			option = scan.nextInt();
			scan.nextLine();
			
			switch(option){
			case 1:
				System.out.println("\nHow many players will play?");
				playerNr = scan.nextInt();
				numbers = new double[playerNr];

				for (int index = 0; index < numbers.length; index++) {
					System.out.println("\nPlayer " + (index+1) + " insert a number.");
					numbers[index] = scan.nextDouble();
				}
				
				System.out.println("\nGenerating Incrememtal Numbers");
				
				for (int index = 0; index < numbers.length; index++){
					double randomValue = minValue + (maxValue - minValue) * rng.nextDouble();
					System.out.println("Player " + (index+1) + " here is your multiplier " + df2.format(randomValue));
					numbers[index] *= randomValue;
				}
				
				double winingValue = 0;
				int i = 0;
				for (int index = 0; index < numbers.length; index++){
					System.out.println("\nPlayer " + (index+1) + " here is your number " + df2.format(numbers[index]));
					if (winingValue < numbers[index]){
						winingValue = numbers[index];
						i = index;
					}
				}
				
				System.out.println("\nPlayer " + (i+1) + " won with his strong number " + df2.format(winingValue));
				break;
			case 2:
				System.out.println("\nWork in Progress");
				break;
			case 3:
				System.out.println("\nSee ya later aligator!");
				break;
				default:
					System.out.println("\nSelect another option.");
					break;
			}
			
		}while (option != 3);
		
		
		
	}
}

// Made by Dioguito
