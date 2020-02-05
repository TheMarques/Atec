
public class Escola {
	Turma[] turmas;
	int nTurmas;
	
	public Escola(int nrTurmas)
	{
		turmas = new Turma[nrTurmas];
	}
	
	public void inserirTurma(Turma turma){
		turmas[nTurmas++] = turma;
	}
	
	public boolean verificarEscolaCheia(){
		if (nTurmas == turmas.length){
			return true;
		}
		else {
			return false;	
		}
	}
	
	public String toString(){
		String text = "\nA Escola é composta por : ";
		for (int i = 0; i < turmas.length; i++) {
			text += turmas[i].toString();
		}
		return text;
	}
}
