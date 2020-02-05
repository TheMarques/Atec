
public class Matriz {

	public static void main(String[] args) {

		//Declarar matriz 10x10
		int [][] tabuada = new int [10][10];
		
		for (int l = 0; l < tabuada.length; l++) {
			for (int c = 0; c < tabuada[0].length; c++) {
				tabuada[l][c] = (l+1) * (c+1);
				System.out.println((l+1) + "x" + (c+1) + "=" + tabuada[l][c]);
			}
			System.out.println("---------");
		}
	}

}
