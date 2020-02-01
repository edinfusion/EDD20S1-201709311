/**
 *
 * @author edinf
 */
import java.util.Scanner;
public class MatrizData {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int m;
        Scanner Sn = new Scanner(System.in);
        System.out.println("Ingresar tamaño de matriz");
        m = Sn.nextInt();
        for (int i = 0; i <= m-1 ; i++) {
             System.out.print("[1]"); 
                for (int j = 1; j <= m-1; j++){
                    if(i==0 || i==m-1 || j==m-1){
                        System.out.print("[1]");
                    }
                    else {
                        System.out.print("[ ]");
                    }
                    
                }  
               System.out.println();
        }
    }
}
