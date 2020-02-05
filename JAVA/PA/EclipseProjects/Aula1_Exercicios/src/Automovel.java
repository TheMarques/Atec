
class Automovel {

	// Attributes
	private String paint;
	private String plate;
	private int doorNumber;
	private double km;
	
	// Methods
	
	// Construct, attributes with same name require "this."
	public Automovel(String paint, String plate, int doorNumber, double km){
		this.paint = paint;
		this.plate = plate;
		this.doorNumber = doorNumber;
		this.km = km;
	}
	
	//Getters
	public String getPaint()
	{
		return paint;
	}
	public String getPlate()
	{
		return plate;
	}
	public int getDoorNumber()
	{
		return doorNumber;
	}
	public double getKm()
	{
		return km;
	}
	
	//Setter
	public void setPaint(String paint)
	{
		this.paint = paint;
	}
	public void setPlate(String plate)
	{
		this.plate = plate;
	}
	public void setDoorNumber(int doorNumber)
	{
		this.doorNumber = doorNumber;
	}
	public void setKm(double km)
	{
		this.km = km;
	}
	
}
