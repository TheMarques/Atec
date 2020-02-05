
public class Pessoa {

		String name;
		double weight;
		double height;
		
		Pessoa(String n, double w, double h)
		{
			name = n;
			weight = w;
			height = h;
		}
		
		double calculateIMC()
		{
			return (weight / (height * height));
		}
}
