
public class Main {

	public static void main(String[] args) {
		
NumeroInt n1 = new NumeroInt(5);
NumeroInt n2 = new NumeroInt(10);

int resultado;

resultado = n1.getNumero() + n2.getNumero();
System.out.println(resultado);
System.out.println(n1.soma(n2));
System.out.println(NumeroInt.somarNumInts(n1, n2));
	}
}
