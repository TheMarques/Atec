import java.util.Scanner;

public class TesteEscola {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		Escola escola;
		Turma turma;
		int nrEscola;
		int nrAlunos;
		
		System.out.println("Insira o nr de escolas");
		nrEscola = scan.nextInt();

		escola = new Escola(nrEscola);
		
		System.out.println("Insira o nr de alunos por turma");
		nrAlunos = scan.nextInt();
		
		turma = new Turma(nrAlunos);
		escola.inserirTurma(turma);
		
		for (int i = 0; i < escola.turmas[0].alunos.length; i++) {
			escola.turmas[0].addAluno(new Aluno("Joao", i * 2));
		}
		
		escola.inserirTurma(turma);
		
		System.out.println(escola);
	}
}
