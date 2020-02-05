
public class Tabuleiro {

	private int nLinhas;
	private int nColunas;
	private int NUMEROEMLINHA = 4;
	private Peca[][] tabuleiro;
	
	public Tabuleiro(int nLinhas, int nColunas) {
		tabuleiro = new Peca[nLinhas][nColunas];
		this.nLinhas = nLinhas;
		this.nColunas = nColunas;
		inicializaTabuleiro();
	}
	/*
	 * Este m�todo � respons�vel por inserir em todas as posi��es da matriz tabuleiro a pe�a VAZIA.
Este m�todo n�o tem par�metros e dever� devolver void, ou seja, nada. Percorra todas as posi��es do tabuleiro com um ciclo for, e insera a PECA.VAZIA
*/
	public void inicializaTabuleiro()
	{
		for (int i = 0; i < nLinhas; i++) {
			for (int j = 0; j < nColunas; j++) {
				tabuleiro[i][j] = Peca.VAZIA;
			}
		}	
	}
	
	/*
	 * Este m�todo representa a inser��o de uma pe�a do jogador recebido no primeiro parametro, no coluna cujo numero � recebido no segundo parametro.
	A pe�a dever� ficar na primeira posi��o livre a contar de baixo do tabuleiro, ou seja, na primeira linha VAZIA, a contar do fim.
	*/
	public boolean poePeca(Jogador jogador, int nCol)
	{
		for (int i = tabuleiro[0].length; i > 0; i--) {
			if (tabuleiro[i][nCol] == Peca.VAZIA)
			{
				tabuleiro[i][nCol] = jogador.getPeca();
				return true;
			}
		}
		System.out.println("Error Code # 9 : Imposs�vel Colocar Pe�a.");
		return false;
	}
	 
	
	public Peca[][] getTabuleiro() {
		return tabuleiro;
	}
	
	/*
	 * Depois de cada jogada este m�todo � chamado para validar se o jogador fez um 4 em Linha, ou seja, se possui 4 pe�as seguidas, numa qualquer linha do tabuleiro. O m�todo apresenta o parametro peca 
	 * (do ultimo jogador que jogou) para procurar em todas as linhas da matriz, as 4 pe�as seguidas iguais � reciba nesse parametro. Caso encontre, o m�todo devolve true, caso contr�rio devolve false.
	 */
	
	private boolean emLinha(Peca peca){
    	int nPecasSeguidas = 0;
    	for(int l = 0; l < tabuleiro.length; l++){
    	  nPecasSeguidas = 1;	
    	  for(int c = 0; c < tabuleiro[0].length-1; c++){
    		if (peca == tabuleiro[l][c] && tabuleiro[l][c] == tabuleiro[l][c+1])
    			nPecasSeguidas++;
    		else
    			nPecasSeguidas = 1;
    		if (nPecasSeguidas == NUMEROEMLINHA)
    			return true;
    	  }
    	}
    	return false;	
    }
    
    private boolean emColuna(Peca peca){
    	int nPecasSeguidas = 0;
    	for(int c = 0; c < tabuleiro[0].length; c++){
    	  nPecasSeguidas = 1;	
    	  for(int l = 0; l < tabuleiro.length-1; l++){
    		if ( peca == tabuleiro[l][c] && tabuleiro[l][c] == tabuleiro[l+1][c])
    			nPecasSeguidas++;
    		else
    			nPecasSeguidas = 1;
    		if (nPecasSeguidas == NUMEROEMLINHA)
    			return true;
    	  }
    	}
    	return false;
    }
    

private boolean emDiagonalDireita(Peca peca){
    	int nPecasSeguidas = 1;
    	for(int l = 0; l < tabuleiro.length-1; l++){
    		for(int c = 0; c < tabuleiro[0].length-1; c++){
    			nPecasSeguidas = 1;
    			for(int i = 0; (l+i) < tabuleiro.length-1 && (c+i+1) < tabuleiro[0].length; i++){
    		        if ( tabuleiro[l+i][c+i] != Peca.VAZIA && tabuleiro[l+i][c+i]==tabuleiro[l+i+1][c+i+1])
    			       nPecasSeguidas++;
    		        else{
    		        	 nPecasSeguidas = 1;
    		        }
    		        if (nPecasSeguidas == NUMEROEMLINHA)
    	    			return true;
    			}    	 	 
        	 }
    	}
    	return false;
    }
    
    private boolean emDiagonalEsquerda(Peca peca){
    	int nPecasSeguidas = 1;
    	for(int l = 0; l < tabuleiro.length-1 ; l++){
    		for(int c = tabuleiro[0].length-1; c >=0 ; c--){
    			nPecasSeguidas = 1;
    			for(int i = 0; (l+i) < tabuleiro.length-1 && (c-i-1) >=0 ; i++){
    				 if ( tabuleiro[l+i][c-i] != Peca.VAZIA && (tabuleiro[l+i][c-i]==tabuleiro[l+i+1][c-i-1]))
    				   nPecasSeguidas++;   
    				 
    		        else
       		        	 nPecasSeguidas = 1;
    		        if (nPecasSeguidas == NUMEROEMLINHA)
    	    			return true;
    			}    	 	 
        	 }
    	}
    	return false;
    }
    

	
	public boolean existeVencedor(Peca peca)
	{
		if (emLinha(peca) || emColuna(peca) || emDiagonalDireita(peca) || emDiagonalEsquerda(peca))	{
			return true;
		}
		else{
		return false;
		}
	}
	
	public boolean empate()
	{
		for (int i = 0; i < nLinhas; i++) {
			for (int j = 0; j < nColunas; j++) {
				if (tabuleiro[i][j] == Peca.VAZIA)
				{
					return false;
				}
				else
				{
					return true;
				}
			}
		}	
		return false;
	}

	public Estado atualizaEstadoJogo(Peca peca)
	{
		if (existeVencedor(peca))
		{
		return Estado.TERMINADO_COM_VENCEDER;
		}
		else if (empate())
		{
		return Estado.TERMINADO_EMPATE;
		}
		else
		{
			return Estado.ADECORRER;
		}
	}
}
