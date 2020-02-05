
public class Aluno {
	
		String name;
		int cc;
		
		public Aluno(String n, int cc)
		{
			name = n;
			this.cc = cc;
		}
		
		public String getName(){
			return name;
		}
		
		public void setName(String n){
			name = n;
		}
		
		public int getCC(){
			return cc;
		}
		
		public void setCC(int cc){
			this.cc = cc;
		}
		
		public String toString(){
			return "\nThe Student " + name + " has the cc " + cc + ".";
		}
}
