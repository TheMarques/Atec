
public class Triangle extends Shape{
	
	private double width;
	private double height;
	
	public Triangle(int sideNumber, String color, double width, double height) {
		super(sideNumber,color);
		this.width = width;
		this.height = height;
		}
	
	public double getWidth(){
		return width;
	}

	public double getHeight(){
		return height;
	}
	
	@Override
	public double getArea() {
		return (width * height)/2;
	}

	@Override
	public double getPerimeter() {
		return (height + height + height);
	}
}