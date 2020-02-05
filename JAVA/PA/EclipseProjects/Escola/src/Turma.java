
public class Turma {
	Aluno[] alunos;
	int nAlunos;
	
	public Turma(int nrAlunos)
	{
		alunos = new Aluno[nrAlunos];
	}
	
	public boolean verificarTurmaCheia(){
		if (nAlunos == alunos.length){
			return true;
		}
		else{
			return false;
		}
	}
	
	public void addAluno(Aluno a){
		alunos[nAlunos++] = a;
	}
	
	public String toString(){
		int j = 1;
		String text = "\nTurma # " + j++;
		for (int i = 0; i < alunos.length; i++) {
			text += alunos[i].toString();
		}
		return text;
	}
}
