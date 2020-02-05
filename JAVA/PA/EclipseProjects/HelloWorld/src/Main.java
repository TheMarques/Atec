import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	
	public static int idade;
	public static Boolean carro;
	public static String cor;

	public static void main(String[] args) throws IOException{
		
		WriteLine("Quantos anos tens?\n");
		idade = Integer.valueOf(readUserInput());
		WriteLine("Tens carro?\n");
		carro = Boolean.valueOf(readUserInput());
		WriteLine("Qual a tua cor favorita\n");
		cor = readUserInput();
		
		WriteLine("Resultado : \n");
		WriteLine("Idade : " + String.valueOf(idade));
		WriteLine("Carro : " + String.valueOf(carro));
		WriteLine("Cor : " + String.valueOf(cor));
	}
	
	public static void WriteLine(String StringToDisplay)
	{
		System.out.println(StringToDisplay);
	}

	public static String readUserInput() throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		return br.readLine();
	}
}
