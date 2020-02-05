import java.util.Scanner;

public class TesteAutomovel {

	private static Automovel car;
	private static Scanner scan = new Scanner(System.in);
	
	public static void main(String[] args) {

		int option;
		
		do {
		//Switch case
		WriteLine("\n1 - Criar Carro");
		WriteLine("2 - Check Plate");
		WriteLine("3 - Check Paint");
		WriteLine("4 - Check DoorNumber");
		WriteLine("5 - Check Km");
		WriteLine("6 - Change Plate");
		WriteLine("7 - Change Paint");
		WriteLine("8 - Change DoorNumber");
		WriteLine("9 - Change Km");
		WriteLine("10 - Exit");
		
		WriteLine("\nChoose an Option: ");
			
		option = scan.nextInt();
		
		switch (option) {
		case 1: 
				CreateCar();
				break;
		case 2:
			CheckCarPart('p');
			break;
		case 3:
			CheckCarPart('c');
			break;
		case 4:
			CheckCarPart('d');
			break;
		case 5:
			CheckCarPart('k');
			break;
		case 6:
			ChangeCarPart('p');
			break;
		case 7:
			ChangeCarPart('c');
			break;
		case 8:
			ChangeCarPart('d');
			break;
		case 9:
			ChangeCarPart('k');
			break;
		case 10:
			WriteLine("Exiting...");
			break;
		default:
			WriteLine("Choose a different option.");
			break;
		}}
		while (option != 10);
			scan.close();
	}
	
	public static void CreateCar()
	{
		String paint;
		String plate;
		int doorNumber;
		double km;
		
		WriteLine("Whats the color of the car?");
		paint = scan.next();
		WriteLine("Whats the car plate?");
		plate = scan.next();
		WriteLine("How many doors does it have?");
		doorNumber = scan.nextInt();
		WriteLine("How many Kilometers?");
		km = scan.nextDouble();
		
		car = new Automovel(paint, plate , doorNumber , km);
	}
	
	private static void CheckCarPart(char c)
	{
		if (c == 'p')
			{
					WriteLine(car.getPlate());
			}
		else if (c == 'c')
		{
			WriteLine(car.getPaint());
		}
		else if (c == 'd')
		{
			WriteLine(String.valueOf(car.getDoorNumber()));
		}
		else
		{
			WriteLine(String.valueOf(car.getKm()));
		}
	}
	
	private static void ChangeCarPart(char c)
	{
		String info;
		int dN;
		double km;
		if (c == 'p')
			{
			WriteLine("Whats new the cars plate?");
			info = scan.next();
			car.setPlate(info);
			}
		else if (c == 'c')
		{
			WriteLine("Whats the new color of the car?");
			info = scan.next();
			car.setPlate(info);
		}
		else if (c == 'd')
		{
			WriteLine("How many doors does it have?");
			dN = scan.nextInt();
			car.setDoorNumber(dN);
		}
		else
		{
			WriteLine("How many Kilometers?");
			km = scan.nextDouble();
			car.setKm(km);
		}
	}
	
	public static void WriteLine(String textToDisplay){
		System.out.println(textToDisplay);
	}
}

/*
Automovel carAtec = new Automovel("Blue", "AA-BB-CC", 5, 0);

WriteLine("\nThe plate on atec's car is "
+ carAtec.getPlate() + "\ndoor number "
+ carAtec.getDoorNumber() + "\ncolor "
+ carAtec.getPaint() + "\nkm : "
+ carAtec.getKm() );

Automovel carA = new Automovel("Black", "BA-EB-PC", 2, 10000);

carA.setPaint(3);
WriteLine("\nThe plate on atec's car is "
+ carA.getPlate() + "\ndoor number "
+ carA.getDoorNumber() + "\ncolor "
+ carA.getPaint() + "\nkm : "
+ carA.getKm() );
 */
