
public class Bike extends Transports {

	String type;
	String model;
	
	public Bike(String brand, int seats, String color, double km, String type, String model){
		super(brand,seats,color,km);
		this.type = type;
		this.model = model;
	}

	public String getType() {
		return type;
	}

	public void setType(String type) {
		this.type = type;
	}

	public String getModel() {
		return model;
	}

	public void setModel(String model) {
		this.model = model;
	}

	@Override
	public double Move() {
		return km += 1;
	}

	@Override
	public String toString() {
		return "Bike " + super.toString() + ", Type= " + getType() + ", Model=" + getModel();
	}

	
}
