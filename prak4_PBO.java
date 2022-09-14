/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package praktikum4_sinta;

import java.util.Scanner;

/**
 *
 * @author Praktikan
 */
public class Praktikum4_Sinta {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
       String[] cars = {"Volvo","bMW","Ford","Mazda"};
       String cars[] = {"Volvo","bMW","Ford","Mazda"};
       String cars[] = nnew String[4];
       cars[0] = " Volvo";
       cars[1] = " BMW";
       cars[2] = " Ford";
       cars[3] = " Mazda";
        
       int[] myNumbers = {1,3,5,7,9};
       System.out.println(myNumbers);
       
       for(int i=0; i <5; i++){
           System.out.println(myNumbers[i]);
           
       }
       
       int[] myNumbers = {1,3,5,7};
       System.out.println(myNumbers);
       
       for(int i=0; i <5; i++){
           System.out.println(myNumbers[i]);
           
       }
        
       int[] myNumbers = {1,3,5,7,9};
       System.out.println(myNumbers);
       
       for(int i=0; i < myNumbers.length; i++){
           System.out.println(myNumbers[i]);
           
       }
        
       int[] myNumbers = {1,3,5,7,9};
       for(int num:myNumbers){
           System.out.println(num);
       }
        
       Scanner input = new Scanner(System.in);
       int[] nilai = new int[3];
       
       System.out.print("Nilai Mtk : ");
       nilai[0] = input.nextInt();
       System.out.print("Nilai Logika : ");
       nilai[1] = input.nextInt();
       System.out.print("Nilai bahasa : ");
       nilai[2] = input.nextInt();
       
       for(int print:nilai){
           System.out.println(print + " ");
       }
       
       System.out.println();
       
       nilai[1] = 86;
       for(int print:nilai){
           System.out.println(print + " ");
       }
        
        int [][]  nilai = {{90,75,80},{80,90,80},{70,75,95}};
        for (int[] i : nilai){
            for(int j : i){
                System.out.println(j);
            }
        }
        
        nilai[0][1] = 700;
        System.out.println("Nilai setelah diganti");
         for (int[] i : nilai){
            for(int j : i){
                System.out.println(j);
            }
        }
    }
    
}

