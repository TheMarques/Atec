
public class Pessoa {

	private String nome;
	private Genero genero;
	
	public Pessoa(String nome, Genero genero)
	{
		this.nome = nome;
		this.genero = genero;
	}
	
	public static void main(String[] args) {
		Pessoa p1 = new Pessoa("Roger",  Genero.MASCULINO);
		Pessoa p2 = new Pessoa("Adelaide",  Genero.FEMININO);
		Pessoa p3 = new Pessoa("André",  Genero.FEMININO);
		
		String sGenero = "FEMININO";
		Genero gen = Genero.valueOf(sGenero);
		
		System.out.println(gen);
		
		Pessoa p4 = new Pessoa("Cátia",  gen);
		System.out.println(p1.genero + "\n" + p2.genero + "\n" + p3.genero + "\n" + p4.genero);
	}
}
