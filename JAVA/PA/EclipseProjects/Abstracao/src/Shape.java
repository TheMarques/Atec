
public abstract class Shape {

	protected int sideNumber;
	protected String color;
	
	public Shape(int sideNumber, String color)
	{
		this.sideNumber = sideNumber;
		this.color = color;
	}
	
	public int getSideNumber(){
		return sideNumber;
	}
	
	public String getColor(){
		return color;
	}
	
	public void setSideNumber(int sideNumber){
		this.sideNumber = sideNumber;
	}
	public void setColor(String color){
		this.color = color;
	}
	
	@Override
	public String toString() {
		return "SideNumber=" + getSideNumber() + ", Color=" + getColor() + ",  Area=" + getArea() + ", Perimeter=" + getPerimeter();
	}

	public abstract double getArea();
	
	public abstract double getPerimeter();
}
