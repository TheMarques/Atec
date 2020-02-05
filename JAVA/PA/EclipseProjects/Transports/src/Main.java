
public class Main {

	public static void main(String[] args) {

		Transports[] transports = new Transports[6];
		
		int i = 0;
		
		transports[i++] = new Plane("Gordon", 120, "Black", 900.0, 4, 10000, 2);
		transports[i++] = new Bike("Honda", 2, "Blue", 50.2, "CBR", "Trendline");
		transports[i++] = new Car("Seat", 4, "Grey", 200800.9, 3, 1190, 115);
		transports[i++] = new Bike("Kawasaki", 1, "Green", 1600.6, "Ninja", "Racing");
		transports[i++] = new Plane("Boing", 250, "Orange", 150900.5, 8, 1000000, 20);
		transports[i++] = new Car("Subaru", 2, "Yellow", 140500.2, 5, 1909, 235);
		
		System.out.println("\n\tBefore Move();");
		for (int j = 0; j < i; j++) {
			System.out.println("\n"+transports[j]);
		}
		
		System.out.println("\n\tAfter Move();");
		
		for (Transports t : transports) {
			t.Move();
			System.out.println("\n"+t);
		}
		
		// Plane = String brand, int seats, String color, double km, int motors, int hours, int storages
		// Bike = String brand, int seats, String color, double km, String type, String model
		// Car = String brand, int seats, String color, double km, int doors, double cc, double hp
	}

}
