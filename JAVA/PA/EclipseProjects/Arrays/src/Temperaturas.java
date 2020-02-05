import java.util.Scanner;

public class Temperaturas {

	public static void main(String[] args) {
		
		//Init Parameters
		int nTemps;
		double[] temps;
		double median = 0;
		int i;

		//Required for Input
		Scanner scan = new Scanner(System.in);
		
		//Asks for array lenght
		System.out.println("Insert the number of temperatures");
		nTemps = scan.nextInt();
		
		//Implements Array
		temps = new double[nTemps];
		
		//Insert temperatures in the array temps loop
		for (i = 0; i <= temps.length - 1; i++)
		{
			//Receives Temperatures and adds then to the array
			System.out.println("Insert the temperature for day " + (i+1) + ".");
			temps[i] = scan.nextDouble();
			median += temps[i]; 
		}
		
		//Display temperatures from the array temps in descend order loop
		for (i = temps.length - 1; i >= 0; i--)
		{
			System.out.println("The temperature for day " + (i + 1) + " is " + temps[i] + "C.");
		}
		
		//Display median temperatures
		median /= temps.length;
		System.out.printf("The median temperature is %.3f", median);
		
		scan.close();
	}
}