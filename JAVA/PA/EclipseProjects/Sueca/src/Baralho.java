
public class Baralho {

	private String s;
	private Carta[] baralho = new Carta[40];
	private Naipe[] naipes;
	private Figura[] figuras;
	private int index;
	
	public Baralho(){
		naipes = Naipe.values();
		figuras = Figura.values();
		
		int index = 0;
		for (int i = 0; i < naipes.length; i++) {
			for (int j = 0; j < figuras.length; j++) {
				baralho[index++] = new Carta(naipes[i], figuras[j]);
			}
		}
	}
	
	public String toString()
	{
		int n =0;
		String texto = "\nO baralho é composto por:\n";	
		for (index = 0; index < baralho.length; index++) {
				texto += "\nCarta # " + (n++ + 1) + ", " + baralho[index].toString();
				if (n % 10 == 0){
					texto += "\n";
				}
			}
		return texto;
	}
}
