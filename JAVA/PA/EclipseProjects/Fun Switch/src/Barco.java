
public class Barco {

	private int anos;
	private int cavalos;
	private String marca;
	private String modelo;
	
	Barco (int anos, int cavalos, String marca, String modelo)
	{
		this.anos = anos;
		this.cavalos = cavalos;
		this.marca = marca;
		this.modelo = modelo;
	}
	
	//Getter
	public int getAnos()
	{
		return anos;
	}
	public int getCavalos()
	{
		return cavalos;
	}
	public String getMarca()
	{
		return marca;
	}
	public String getModelo()
	{
		return modelo;
	}
	
	//Setter
	public void setAnos(int anos)
	{
		this.anos = anos;
	}
	
	public void setCavalos(int cavalos)
	{
		this.cavalos = cavalos;
	}
	public void setMarca(String marca)
	{
		this.marca = marca;
	}
	
	public void setModelo(String modelo)
	{
		this.modelo = modelo;
	}
	
}
