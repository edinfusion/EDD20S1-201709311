/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tdacoin;

import java.util.InputMismatchException;
import java.util.Scanner;

/**
 *
 * @author edinf
 */
public class EmCoin {
    String nombre;
    private int  noMonedas;
    int id;
    int cliente [][] = new int [5][2];
    //Constructor
    public EmCoin (String nombreMoneda, int noMonedasInicial, int id){
        if(noMonedas > 0)
        {
            this.nombre = nombreMoneda;
            this.noMonedas = noMonedasInicial;
            this.id = id;
        }
        else
        {
            this.noMonedas = 0;
        }
    }
    
    // Creacion de Metodos
    public int getMonendas(){
        return this.noMonedas;
    }
    
//    public void CrearMoneda(String nombreMoneda, int CantidadMonedas ){ //creacion de monedas
//        this.nombre = nombreMoneda;
//        this.noMonedas = CantidadMonedas;
//    }
    
    public void AgregarDueño(int Cantidad){
        for (int i = 0; i < cliente.length; i++) {
            if (cliente[i][0] == 0) {
                 id= id+1;
                cliente[i][0] = id;
                cliente[i][1] = Cantidad;  
                System.out.println("Id: "+cliente[i][0]+ " saldo: "+cliente[i][1]);
                break;
        }
        }
    }
    public void EnviarMonedas(int Id, int Cantidad){
        for (int i = 0; i < cliente.length; i++) {
            if (cliente[i][0] == Id) {
                if (Cantidad <= cliente[i][1] && Cantidad > 0) {
                    cliente[i][1] = (cliente[i][1] - Cantidad); 
                }
            }
        }
    }
    
    public int getMonedasCliente(int Id){
        int monedas =0 ;
        for (int i=0; i < cliente.length; i++) {
            if (cliente[i][0] == Id) {
                 monedas = cliente[i][1];
               
            }   
        }
         return monedas;
    }
    
    public void TransferirMonedas(int Emisor, int Receptor, int Cantidad) {
        if (Cantidad > 0) {
            for (int i = 0; i < cliente.length; i++) {
                if (cliente[i][0] == Emisor && Emisor != Receptor && Cantidad <= cliente[i][1]) {
                    for (int j = 0; j < cliente.length ; j++) {
                        if (cliente[j][0] == Receptor) {
                            cliente[j][1] = cliente[j][1]+Cantidad;
                            cliente[i][1] = cliente[i][1] - Cantidad;
                            break;
                        }
                    }
                    break;
                }
            }
        }
    }
    
    public void Menu() {
       
        try {
            int menuopcion = 0;
            int guardar = 0;
            while (menuopcion < 5) {

                System.out.println("**********************************************");
                System.out.println("--------------------EMCOIN--------------------");
                System.out.println("1. Agregar Dueños                            |");
                System.out.println("2. Saldo                                     |");
                System.out.println("3. Enviar Monedas                            |");
                System.out.println("4. Transferir Monedas                        |");
                System.out.println("5. Salir                                     |");
                System.out.println("**********************************************");

                // boolean salir = false;
                int opcion;
                Scanner sn = new Scanner(System.in);
                System.out.println("Escoge una opcion");

                opcion = sn.nextInt();

                switch (opcion) {
                    case 1:
                        //mostrar.InicializarProductos();
                        Scanner no = new Scanner(System.in);
                        System.out.println("Ingresa numero de monedas para dueño: ");
                        int monedas = no.nextInt();
                        AgregarDueño(monedas);
                        Menu();
                        break;
                    case 2:
                       Scanner n = new Scanner(System.in);
                        System.out.println("Ingresa ID para ver tu saldo: ");
                        int ID = n.nextInt();
                        System.out.println("Su saldo es: "+getMonedasCliente(ID));
                        Menu();
                        break;
                    case 3:
                         Scanner a = new Scanner(System.in);
                        System.out.println("Ingrese ID: ");
                        int id = a.nextInt();
                        System.out.println("Ingrese no. Monedas a enviar: ");
                        int moneda = a.nextInt();
                        EnviarMonedas(id, moneda);
                        Menu();
                        break;
                    case 4:
                        Scanner c = new Scanner(System.in);
                        System.out.println("Ingrese ID emisor: ");
                        int IDe = c.nextInt();
                        System.out.println("Ingrese ID Receptor: ");
                        int IDr = c.nextInt();
                        System.out.println("Ingrese no. Monedas a transferir: ");
                        int coins = c.nextInt();
                        TransferirMonedas(IDe, IDr, coins);
                        Menu();
                        break;                       
                    case 5:
                        System.exit(0);
                        break;

                    default:

                        System.out.println("Solo numeros entre 1 y 5");
                }
            }
        } catch (InputMismatchException e) {
            System.out.println("Debes insertar un numero");
            Menu();
        }

    }
}
