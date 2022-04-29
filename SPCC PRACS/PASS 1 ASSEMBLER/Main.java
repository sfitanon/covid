import java.util.*;
 
public class Main {
    public static void main(String args[]){
        System.out.println("Enter no of statements: ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println("Enter the mnemonic code: ");
        String p[] = new String[n];
        sc.nextLine();
        for (int i = 0; i<n; i++){
            p[i] = sc.nextLine();
        }
        System.out.println("Input: ");
        for (int i = 0; i<n; i++){
            System.out.println(p[i]);
        }
        HashMap<String,String> map = new HashMap<String,String>();
        map.put("START","(AD,01)");
        map.put("501", "(C, 501)");
 	map.put("A","(S,0)");    
 	map.put("DS","(DL,0)");   
	map.put("1","(C,1)"); 
   	map.put("B","(S,1)"); 
   	map.put("C","(S,2)"); 
   	map.put("READ","(IS,09)"); 
   	map.put("MOVER","(IS,04)");   
   	map.put("AREG,","(RG,01)"); 
   	map.put("ADD","(IS,01)"); 
   	map.put("MOVEM","(IS,05)"); 
   	map.put("PRINT","(IS,10)"); 
   	map.put("END","(AD,02)"); 
        System.out.println("LC\tPASS1");
        int j = 501;
        for(int i = 0;i<n;i++){
            if(i!=0){
                System.out.print(j++);
            }
            String mnemonic[] = p[i].split(" ");
            for(int k=0; k< mnemonic.length; k++){
 
            System.out.print("\t"+map.get(mnemonic[k])+" ");
            }
            System.out.println();
        }
    }
}
 