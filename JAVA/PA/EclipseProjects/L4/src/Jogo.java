
public class Jogo {

	private Jogador jogador1;
	private Jogador jogador2;
	private Tabuleiro tabuleiro;
	private Estado estado;
	
	public Jogo(int nLinhas, int nColunas) {
		tabuleiro = new Tabuleiro(nLinhas,nColunas);
		estado = Estado.ADECORRER;
	}
	
	public void atualizaEstadoJogo(Peca peca)
	{
		estado = tabuleiro.atualizaEstadoJogo(peca);
	}
	
	public boolean executaJogada(int idJogador, int nColuna)
	{
		Jogador jogador;
		if (idJogador == 1){
			jogador = jogador1;
		}
		else{
			jogador = jogador2;
		}
		boolean jogada =  tabuleiro.poePeca(jogador, nColuna);
		
		if (jogada){
			atualizaEstadoJogo(jogador.getPeca());
		}
		return jogada;
		}
	
	// Getters jogadores + estado + tabuleiro
	public Jogador getJogador1(){
		return jogador1;
	}
	
	public Jogador getJogador2(){
		return jogador2;
	}
	
	public Tabuleiro getTabuleiro(){
		return tabuleiro;
	}
	
	public Estado getEstado(){
		return estado;
	}
	
	// Setters
	public void setJogador1(Jogador jogador1){
		this.jogador1 = jogador1;
	}
	public void setJogador2(Jogador jogador2){
		this.jogador2 = jogador2;
	}
	public void setEstado(Estado estado){
		this.estado = estado;
	}
}
