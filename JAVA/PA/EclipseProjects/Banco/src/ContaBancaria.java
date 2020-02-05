
public class ContaBancaria {
	private String serial;
	private String owner;
	private double ammount;

	public ContaBancaria(String s, String o) {
		serial = s;
		owner = o;
		ammount = 0;
	}

	//Shows cash ammount
	public double checkMoney() {
		return ammount;
	}
	
	//Deposits cash
	public double addMoney(double a) {
		return ammount += a;
	}

	//Removes Cash
	public void rmvMoney(double a) {
		ammount -= a;
	}

	//Gets String Number
	public String getSerial() {
		return serial;
	}

	//Sets String Number
	public void setSerial(String s) {
		serial = s;
	}

	//Shows owner
	public String getOwner() {
		return owner;
	}

	//Sets owner
	public void setOwner(String o) {
		owner = o;
	}

	//Prints information
	public String toString() {
		return "\nThe bank account " + serial + ", is owned by " + owner + ", and currently has " + ammount + "$.";
	}
}
