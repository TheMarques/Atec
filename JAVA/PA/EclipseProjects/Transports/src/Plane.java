
public class Plane extends Transports{
	
	int motors;
	int hours;
	int storages;
	
	public Plane(String brand, int seats, String color, double km, int motors, int hours, int storages){
		super(brand,seats,color,km);
		this.motors= motors;
		this.hours= hours;
		this.storages = storages;
	}

	public int getMotors() {
		return motors;
	}

	public void setMotors(int motors) {
		this.motors = motors;
	}

	public int getHours() {
		return hours;
	}

	public void setHours(int hours) {
		this.hours = hours;
	}

	public int getStorages() {
		return storages;
	}

	public void setStorages(int storages) {
		this.storages = storages;
	}

	@Override
	public double Move() {
		return km += 100;
	}

	@Override
	public String toString() {
		return "Plane " + super.toString() + ", MotorNumber= " + getMotors() + ", Hours=" + getHours() + ", StorageNumber=" + getStorages();
	}
}
