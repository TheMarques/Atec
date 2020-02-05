
public class Warehouse {

	private Product[] items;
	private int itemCount = 0;
	
	public Warehouse (int stock){
		items = new Product[stock];
	}
	
	public void addItem(Product item){
		items[itemCount++] = item;
	}
	
	public void addStock(Product item, int quantity){
		int i = findItem(item);
		if (items[i] != null){
			items[i].addStock(quantity);
		}
	}
	
	public void removeStock(Product item, int quantity){
		int i = findItem(item);
		if (items[i].checkStock() >= quantity){
			items[i].removeStock(quantity);
		}
	}
	
	private int findItem(Product item){		
		for (int i = 0; i < itemCount; i++) {
			if (items[i] == item){
				return i;
			}
		}
		return 0;
	}
	
	public String toString(){
		String text = "The Warehouse contains : \n";
		
		if (itemCount == 0){
			return text += " no items.";
		}
		
		for (int i = 0; i < itemCount; i++) {
			text += items[i].toString();
		}
		return text;
	}
	
}
