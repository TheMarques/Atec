
public abstract class Transports {

	protected String brand;
	protected int seats;
	protected String color;
	protected double km;
	
	public Transports(String brand , int seats, String color, double km)
	{
		this.brand = brand;
		this.seats = seats;
		this.color = color;
		this.km = km;
	}

	public String getBrand() {
		return brand;
	}



	public void setBrand(String brand) {
		this.brand = brand;
	}



	public int getSeats() {
		return seats;
	}



	public void setSeats(int seats) {
		this.seats = seats;
	}



	public String getColor() {
		return color;
	}



	public void setColor(String color) {
		this.color = color;
	}



	public double getKm() {
		return km;
	}



	public void setKm(double km) {
		this.km = km;
	}


	@Override
	public String toString() {
		return "Brand =" + getBrand() + ", SeatNumber=" + getSeats() + ", Paint=" + getColor()
				+ ", Km=" + getKm() + " ";
	}

	public abstract double Move();
}
