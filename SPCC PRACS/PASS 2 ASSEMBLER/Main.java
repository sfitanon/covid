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
        map.put("(AD,01) (c,501)", "-");
        map.put("(S,0) (DL,0) (c,1)", "-");
        map.put("(S,1) (DL,0) (c,1)", "-");
        map.put("(S,2) (DL,0) (c,1)", "-");
        map.put("(IS,09) (S,0)", "09 00 501");
        map.put("(IS,09) (S,1)", "09 00 502");
        map.put("(IS,04) (RG,01) (S,0)", "04 01 501");
        map.put("(IS,01) (RG,01) (S,1)", "01 01 502");
        map.put("(IS,05) (RG,01) (S,2)", "05 01 503");
        map.put("(IS,05) (RG,01) (S,2)", "05 01 503");
        map.put("(IS,10) (S,2)", "05 00 503");
        map.put("(AD,02)", "-");
        System.out.println("LC\tPASS1\t\t\tPASS2");
        int j = 501;
        for(int i = 0;i<n;i++){
            if(i!=0){
                System.out.print(j++);
            }
            System.out.print("\t"+p[i]+"\t\t\t"+map.get(p[i])+" ");
           
            System.out.println();
        }
    }
}