
public enum Peca {
	VERMELHA('X'),
	AZUL('O'),
	VAZIA(' ');
	
	private char s;
	
	private Peca (char s)
{
	this.s = s;
}

public char getSimbolo(){

	return this.s;
}
}