
public class Biblioteca {

	private String nome;
	private Livro[] biblioteca;
	private int nLivros;
	
	public Biblioteca(String nome, int capacidade)
	{
		this.nome = nome;
		biblioteca = new Livro[capacidade];
	}
	
	public void addLivro(Livro novoLivro){
		biblioteca[nLivros++] = novoLivro;
	}
	
	public void rmvLivro(int ean){
		
		for (int i = 0; i < biblioteca.length; i++) {
			if (ean == biblioteca[i].getEan())
			{
				biblioteca[i] = biblioteca[--nLivros];
				biblioteca[nLivros] = null;
				System.out.println("\nBook removed sucessfully.");
			}
		}
	}
	
	public String toString()
	{
		String texto = "Nome Biblioteca: " + nome + "\n";
		for (int i = 0; i < nLivros; i++) {
			texto += "\nBook # " + (i+1) + "" + biblioteca[i] + "\n";
		}
		return texto;
	}
}