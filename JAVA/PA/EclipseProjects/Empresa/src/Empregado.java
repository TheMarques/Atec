
public class Empregado {
	private String numeroEmpregado;
	private String nome;
	private Genero genero;
	private double salario;
	private String departamento;
	private int numeroDeFilhos;
	
	public Empregado(String numeroEmpregado, String nome, Genero genero, double salario, String departamento,
		int numeroFilhos) {
		this.numeroEmpregado = numeroEmpregado;
		this.nome = nome;
		this.genero = genero;
		this.salario = salario;
		this.departamento = departamento;
		this.numeroDeFilhos = numeroFilhos;
	}
	public String getNumeroEmpregado() {
		return numeroEmpregado;
	}
	public void setNumeroEmpregado(String numeroEmpregado) {
		this.numeroEmpregado = numeroEmpregado;
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public Genero getGenero() {
		return genero;
	}
	public void setGenero(Genero genero) {
		this.genero = genero;
	}
	public double getSalario() {
		return salario;
	}
	public void setSalario(double salario) {
		this.salario = salario;
	}
	public String getDepartamento() {
		return departamento;
	}
	public void setDepartamento(String departamento) {
		this.departamento = departamento;
	}
	public int getNumeroDeFilhos() {
		return numeroDeFilhos;
	}
	public void setNumeroDeFilhos(int numeroFilhos) {
		this.numeroDeFilhos = numeroFilhos;
	}
	
	public void aumentaNumeroDeFilhos(int n){
		numeroDeFilhos += n;
	}
	@Override
	public String toString() {
		return "\nEmpregado nr " + getNumeroEmpregado() + ", de nome " + getNome() + ", do genero "
				+ getGenero() + ", com um salario de " + getSalario() + ", do departamento " + getDepartamento()
				+ ", que tem " + getNumeroDeFilhos() + " filhos.";
	}
	
	
}
