
public class Jogador {

	private int id;
	private String nome;
	private int nJogadas;
	private Peca peca;

	//Jogador (idJogador,nomeJog,pecaJog)
	public Jogador(int id, String nome, Peca peca) {
		this.id = id;
		this.nome = nome;
		this.peca = peca;
	}

	//Getters
	public int getId()
	{
		return id;
	}
	public String getNome()
	{
		return nome;
	}
	public int getNJogadas()
	{
		return nJogadas;
	}
	public Peca getPeca()
	{
		return peca;
	}
	
	//Setters
	public void setId(int id)
	{
		this.id = id;
	}
	public void setNome(String nome)
	{
		this.nome = nome;
	}
	public void setNJogadas(int nJogadas)
	{
		this.nJogadas = nJogadas;
	}
	public void setPeca(Peca peca)
	{
		this.peca = peca;
	}
}
