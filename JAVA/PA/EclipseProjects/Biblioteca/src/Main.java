import java.util.Scanner;

public class Main {

		private static Scanner scan = new Scanner(System.in);
		
	public static void main(String[] args) {

		int s;
		String name;
		String author;
		int cap;
		Biblioteca biblio;
		int serial;
		
		System.out.println("Whats the name of your Library?");
		name = scan.nextLine();
		System.out.println("Whats the capacity of your Library? (Max Number of Books )");
		cap = scan.nextInt();
		biblio = new Biblioteca(name,cap);
		
		do {
		System.out.println("\n*****Welcome to the Menu*****\n");
			System.out.println("Select one of the following options to continue\n");
			System.out.println("1-Add Book\n");
			System.out.println("2-Remove Book\n");
			System.out.println("3-Check Library\n");
			System.out.println("4-Exit Menu\n");
			System.out.println("5-Add Example Books\n");
			s = scan.nextInt(); 
			
			switch (s) {
			case 1:
				System.out.println("\nWhats the name of the Book?");
				name = scan.next();
				//Consumir o Enter
				//scan.next();
				System.out.println("Whats the name of the Author?");
				author = scan.next();
				//scan.next();
				System.out.println("How many pages does it have?");
				cap = scan.nextInt();
				System.out.println("Whats the ean?");
				serial = scan.nextInt();
				biblio.addLivro(new Livro(name, author, cap, serial));
				break;
			case 2:
				System.out.println("Whats the ean of the book to remove?\n");
				serial = scan.nextInt();
				biblio.rmvLivro(serial);
				scan.next();
				break;
			case 3:
				System.out.println(biblio);
				break;
			case 4:
				System.out.println("\nClosing Menu...\n");
				System.exit(2);
			case 5:
				System.out.println("\nReturning books 3 books to the library.\n");
				biblio.addLivro(new Livro("Família Matias I", "Orlando", 323, 8888));
				biblio.addLivro(new Livro("Ortografia X", "Mateus Moreira", 925, 6666));
				biblio.addLivro(new Livro("Janela ao Quadrado", "André", 123, 3333));
			default:
				break;
			}
			}
			while (s != 4);
			scan.close();
	}
	}
