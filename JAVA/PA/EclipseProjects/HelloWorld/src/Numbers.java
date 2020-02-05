import java.io.IOException;
import java.util.Scanner;

public class Numbers {
	
	
	public static void main(String[] args) throws IOException{
	
			int dobro;
			
			Scanner input = new Scanner(System.in);
			
			WriteLine("Introduz um valor : ");
			
			dobro =  input.nextInt() * 2;
			
			WriteLine("O dobro do valor introduzido é : " + String.valueOf(dobro));
			
			input.close();
	}
	
	public static void WriteLine(String StringToDisplay)
	{
		System.out.println(StringToDisplay);
	}
}
