
public enum Genero {
	
	MASCULINO('M'), FEMININO('F');

	private char abreviaturaGenero;
	
	private Genero(char abreviaturaGenero) {
		this.abreviaturaGenero = abreviaturaGenero;
	}

	public char getAbreviaturaGenero(){
		return abreviaturaGenero;
	}
}
