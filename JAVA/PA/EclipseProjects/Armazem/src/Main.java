import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		String name;
		int stock;
		int minStock;
		int option = 0;
		
		System.out.println("Welcome to the warehouse management system");
		System.out.println("How many items can we store?");
		stock = scan.nextInt();
		Warehouse warehouse = new Warehouse(stock);
		do{		
			System.out.println("\nStorage Menu");
			System.out.println("1 - Insert new item.");
			System.out.println("2 - Add stock");
			System.out.println("3 - Remove stock");
			System.out.println("4 - View current items in the warehouse");
			System.out.println("5 - Quit");
			System.out.println("Select one of the following options to proceed.\n");
			option = scan.nextInt();
			scan.nextLine();
			System.out.println("\n");
			switch (option){
			case 1:
				System.out.println("Whats the name of the item to add?");
	
				name = scan.nextLine();
				
				System.out.println("Whats the number of item to add?");
				stock = scan.nextInt();
				
				System.out.println("Whats the minimum stock for this item?");
				minStock = scan.nextInt();

				warehouse.addItem(new Product (name , stock , minStock));
				System.out.println("\nItem " + name + " added sucessfully");
				break;
			case 2:
				System.out.println("Whats the name of the item to add?");
				name = scan.nextLine();
				
				System.out.println("Whats the number of item to add?");
				stock = scan.nextInt();
				
				warehouse.addStock(new Product(name),stock);
				System.out.println("\nStock added sucessfully");
				break;
			case 3:
				System.out.println("Whats the name of the item to remove?");
				name = scan.nextLine();
				
				System.out.println("Whats the number of item to remove?");
				stock = scan.nextInt();

				warehouse.removeStock(new Product(name),stock);
				System.out.println("\nStock removal sucessfully");
				break;
			case 4:
				System.out.println("\n");
				System.out.println(warehouse);
				System.out.println("\n");
				break;
			case 5:
				System.out.println("\nExiting the system.");
				break;
			default:
				System.out.println("\nChoose a valid option.");
				break;
			}
		}while (option != 5);
		
	}

}
