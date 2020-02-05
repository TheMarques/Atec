
public enum Figura {
	AS(11), MANILHA(10), REI(4), VALETE(3), DAMA(2), SENA(0), QUINA(0), QUADRA(0), TERNO(0), DUQUE(0);
	
	private int v;
	
	private Figura(int v)
	{
		this.v = v;
	}
	
	public int getValue() {
		return v;
	}
}
