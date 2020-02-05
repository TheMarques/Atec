import java.io.IOException;
import java.time.LocalDate;

public class Playlist {
	private String nome;
	private int capacidade;
	private LocalDate dataCriacao;
	private Musica[] musicas;
	private int nrMusicas;
	
	public Playlist(String nome, int capacidade, LocalDate dataCriacao){
		this.nome = nome;
		this.dataCriacao = dataCriacao;
		musicas = new Musica[capacidade];
	}
	
	public Playlist(){
		
	}
	
	public void playMusic(Musica musica) throws IOException{
		musica.play();
	}
	
	public void addMusica(Musica musica){
		if (nrMusicas < capacidade){
			musicas[nrMusicas++] = musica;	
		}
	}
	
	public String toString(){
		String texto = "A playlist " + nome + " criada a " + dataCriacao + " contem : \n" ;
		
		for (int i = 0; i < nrMusicas; i++) {
			texto += musicas[i].toString();
		}
		return texto;
	}
}
