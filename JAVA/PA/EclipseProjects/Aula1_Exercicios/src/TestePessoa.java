
public class TestePessoa {

	public static void main(String[] args) {

		Pessoa p1 = new Pessoa("Diogo", 70.5, 1.70);
		
		WriteLine("O meu IMC é " + p1.calculateIMC());
		
	}
	
	public static void WriteLine(String textToDisplay){
		System.out.println(textToDisplay);
	}
}
