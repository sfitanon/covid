import java.util.*;
public class Main{
    public static void qQuadruple(String exp[]){
        System.out.println("op\targ1\targ2\tresult");
        for (int i=0;i < exp.length; i++){
            String[]expr = exp[i].split("");
            System.out.println(expr[3] + "\t" + expr[2] + "\t" + expr[4] + "\t" + expr[0]);
        }
    }
    public static void rTriple(String exp[]){
        System.out.println("op\targ1\targ2");
        for (int i=0;i < exp.length; i++){
            String[]expr = exp[i].split("");
            System.out.println(expr[3] + "\t" + expr[2] + "\t" + expr[4]);
        }
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of expressions: \t");
        int n = sc.nextInt();
        System.out.println("Enter each expression in one line:  \t");
        sc.nextLine();
        String expn[] = new String[n];
        for (int i=0;i < n;i++)
        {
            expn[i]= sc.nextLine();
        }
        System.out.println("\n\n\tQuadruples:   ");
        System.out.println();
        qQuadruple(expn);
        System.out.println("\n\n\tTriples:   ");
        System.out.println();
        rTriple(expn);
    }
}