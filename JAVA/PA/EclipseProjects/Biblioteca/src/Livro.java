
public class Livro {

	private String title;
	private String author;
	private int pageNr;
	private int ean;

	public Livro(String title, String author, int pageNr, int ean) {
		this.title = title;
		this.author = author;
		this.pageNr = pageNr;
		this.ean = ean;
	}

	public Livro(String title, int pageNr, int ean) {
		super();
		this.title = title;
		this.pageNr = pageNr;
		this.ean = ean;
	}

	public Livro(String title, String author, int ean) {
		super();
		this.title = title;
		this.author = author;
		this.ean = ean;
	}

	public String toString(){
		return "\nTitle: " + title + "\nAuthor: " + author + "\nPageNr: " + pageNr + "\nEan: " + ean;
	}
	
	public String getTitle() {
		return title;
	}



	public void setTitle(String title) {
		this.title = title;
	}



	public String getAuthor() {
		return author;
	}



	public void setAuthor(String author) {
		this.author = author;
	}



	public int getPageNr() {
		return pageNr;
	}



	public void setPageNr(int pageNr) {
		this.pageNr = pageNr;
	}



	public int getEan() {
		return ean;
	}



	public void setEan(int ean) {
		this.ean = ean;
	}
}
