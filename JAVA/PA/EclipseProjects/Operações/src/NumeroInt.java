
public class NumeroInt {

	private int numero;

	public NumeroInt(int numero) {
		this.numero = numero;
	}

	
	public int getNumero() {
		return numero;
	}


	public void setNumero(int numero) {
		this.numero = numero;
	}


	public String toString() {
		return "NumeroInt [numero=" + numero + "]";
	}
	
	public int soma(NumeroInt n)
	{
		return numero + n.getNumero();
	}
	public static int somarNumInts(NumeroInt n1, NumeroInt n2)
	{
		return n1.numero + n2.getNumero();
	}
}
