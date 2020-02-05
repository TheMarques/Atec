
public class Carta {
	private Naipe naipe;
	private Figura figura;
	
	public Carta(Naipe naipe, Figura figura) {

		this.naipe = naipe;
		this.figura = figura;
	}

	public Naipe getNaipe() {
		return naipe;
	}

	public void setNaipe(Naipe naipe) {
		this.naipe = naipe;
	}

	public Figura getFigura() {
		return figura;
	}

	public void setFigura(Figura figura) {
		this.figura = figura;
	}

	public String toString() {
		return "do naipe : " + naipe + ", figura : " + figura + ", valor : " + figura.getValue() + "";
	}
}
