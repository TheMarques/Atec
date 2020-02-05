
public class Car extends Transports{
	
	private int doors;
	private double cc;
	private double hp;
	
	public Car(String brand, int seats, String color, double km, int doors, double cc, double hp)
	{
		super(brand,seats,color,km);
		this.doors = doors;
		this.cc = cc;
		this.hp = hp;
	}


	public int getDoors() {
		return doors;
	}


	public void setDoors(int doors) {
		this.doors = doors;
	}


	public double getCc() {
		return cc;
	}


	public void setCc(double cc) {
		this.cc = cc;
	}


	public double getHp() {
		return hp;
	}


	public void setHp(double hp) {
		this.hp = hp;
	}


	@Override
	public double Move() {
		return km += 5;
	}


	@Override
	public String toString() {
		return "Car " + super.toString() +  ", DoorNumber=" + getDoors() + ", Cc=" + getCc() + ", Hp=" + getHp();
	}

	
}
