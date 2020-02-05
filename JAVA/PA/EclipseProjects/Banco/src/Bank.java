
public class Bank {

	private ContaBancaria[] contas = new ContaBancaria[10];
	private int nContas = 0;

	//Creates account
	public void createAccount(String n, String s) {
		contas[nContas++] = new ContaBancaria(n, s);
	}

	//Deposits money
	public void deposit(String s, double a) {
		findAccount(s).addMoney(a);
	}

	//Withdraws money
	public void withdrawal(String s, double a) {
		if (findAccount(s).checkMoney() > a) {
			findAccount(s).rmvMoney(a);
		}
	}

	//Transfers money
	public void transfer(String s1, String s2, double a) {
		if (findAccount(s1).checkMoney() > a) {
			findAccount(s1).rmvMoney(a);
			findAccount(s2).addMoney(a);
		}
	}

	//Finds accounts in array using serial number
	public ContaBancaria findAccount(String s) {
		for (int i = 0; i < contas.length; i++) {
			if (contas[i].getSerial().equals(s)) {
				return contas[i];
			}
		}
		return null;
	}

	//Shows information
	public String toString() {
		String text = "\nThe bank has " + nContas + " accounts :";
		for (int i = 0; i < nContas; i++) {
			text += "\nAccount # " + i + " " + contas[i].toString();
		}
		return text;
	}
}
