
public class TestaAppBanco {

	public static void main(String[] args) {

		Bank bank = new Bank();

		String[] a = new String[3];
		a[0] = "00710062";
		a[1] = "00220073";
		a[2] = "00630094";

		bank.createAccount(a[0], "Arthur");
		bank.createAccount(a[1], "Stella");
		bank.createAccount(a[2], "Marie");

		System.out.println(bank);

		bank.deposit(a[0], 1000);
		bank.deposit(a[1], 5000);
		bank.deposit(a[2], 100);

		System.out.println(bank);

		bank.withdrawal(a[0], 500.0);
		bank.withdrawal(a[2], 200.0);

		System.out.println(bank);

		bank.transfer(a[1], a[0], 3980);
		bank.transfer(a[0], a[1], 500);
		bank.transfer(a[1], a[2], 1000);

		System.out.println(bank);
		
		/*
		 * 4. Levante dinheiro de uma conta que tenha saldo. De seguida levante
		 * uma quantia de uma conta que não tenha saldo. Imprima o objecto banco
		 * para validar os movimentos 5. Efetue algumas transferencias
		 * bancárias, umas com saldo na conta de origem e outras sem saldo.
		 * Imprima o objecto banco para validar os movimentos
		 */

	}

}
