
public class Main {

	public static void main(String[] args) {

		ISalarial[] salarios = new ISalarial[2];
		//(String numeroEmpregado, String nome, double salario, String departamento, int numeroFilhos)
		Empregado empregado = new Empregado("015283_2019", "Diogo", 1000.50, "IT", 0);
		//(int id, String nome, double salarioFixo, double valorVendas, double percentagemComissao)
		Vendedor vendedor = new Vendedor(0001,"Ricardo", 800.00, 2500, 6.5);
		
		salarios[0] = empregado;
		salarios[1] = vendedor;
		
		System.out.println("\n\tSalarios:");
		for (ISalarial s : salarios){
			System.out.println("\t"+ s.calculaSalario());
		}
		
		System.out.println("\n");
		System.out.println("\t\t\t\tTabela de Empregados\n");
		System.out.println("\n\tNome do Empregado\tTipo de Empregado\tSalario");
		for (ISalarial s : salarios){
			System.out.println("\n\t" + s.getNome() + "\t\t\t"+ s.getTipoDeEmpregado() +  "\t\t" + s.calculaSalario());
			//Using .getClass() //System.out.println("\n\t" + s.getNome() + "\t\t\t"+ s.getClass().getName() +  "\t\t" + s.calculaSalario());
		}
	}

}
