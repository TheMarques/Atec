import java.io.IOException;
import java.time.LocalDate;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws IOException {
		Scanner scan = new Scanner(System.in);
		int opcao;
		String name;
		LocalDate dataCriacao;
		int capacidade;
		EstiloMusical estilo;
		Playlist playlist;
		String diretorio = "D:\"";
		Musica musica = new Musica("Kalimba.mp3",2008,EstiloMusical.ELECTRONIC, "Mr. Scruff", 5.48,diretorio);

		System.out.println("Playlist Creator");
		System.out.println("\nWhats the name of the playlist?");
		name = scan.nextLine();
		System.out.println("\nHow many songs will you add?");
		capacidade = scan.nextInt();
		dataCriacao = LocalDate.now();
		playlist = new Playlist(name,capacidade,dataCriacao);
		
		do{
			System.out.println("\nMenu");
			System.out.println("\n1- Add Song");
			System.out.println("\n2- Play Song");
			System.out.println("\n3- Show Playlist");
			System.out.println("\n4- Exit");
			System.out.println("\nSelect an option");
			opcao = scan.nextInt();
			scan.nextLine();
			switch (opcao) {
			case 1:
				System.out.println("Adding Random Song");
				playlist.addMusica(musica);
				
				/*System.out.println("Playlist Creator");
				System.out.println("\nWhats the name of the playlist?");
				name = scan.nextLine();
				System.out.println("\nHow many songs will you add?");
				capacidade = scan.nextInt();
				dataCriacao = LocalDate.now();
				playlist = new Playlist(name,capacidade,dataCriacao);
				*/
				break;
			case 2:
				playlist.playMusic(musica);
				
				/*
				 * System.out.println("\nWhats the name of the song?");
		
				name = scan.nextLine();
				System.out.println("\nYear");
				capacidade = scan.nextInt();
						 */
				break;
			case 3:
				System.out.println(playlist);
				break;
			default:
				break;
			}
		}while (opcao != 4);
	}
}
