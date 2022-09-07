/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package praktikum.pkg3_sinta;

import java.util.Scanner;

/**
 *
 * @author Praktikan
 */
public class Praktikum3_Sinta {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        //if else kelulusan
//        Scanner input = new Scanner(System.in);
//        
//        System.out.print("Masukan nilai :");
//        int nilai = input.nextInt();
//        
//        if(nilai >= 76){
//            System.out.println("Anda Lulus :)");
//        }else if(nilai >= 71){
//            System.out.println("Nilai anda B+");
//        }else{
//            System.out.println("Nilai anda tidak memenuhi:(");
        
        //if else nilai mutu
        Scanner  input = new Scanner(System.in);
        do{
            
        System.out.print("Masukan nilai :");
        int nilai = input.nextInt();
        char huruf_mutu;
        
        if(nilai%10)==0){
            continue;
        }
        if(nilai >=100){
            System.out.println("input tidak sesuai");
        }else if (nilai >= 76){
            huruf_mutu ='A';
            System.out.println(huruf_mutu);
        }else if(nilai >= 71){
            huruf_mutu = 'B';
             System.out.println(huruf_mutu);
        }else if(nilai >= 66){
            huruf_mutu = 'C';
            System.out.println(huruf_mutu);
        }else{
            huruf_mutu ='D';
            System.out.println(huruf_mutu);
        }

        //switch case
//        switch(huruf_mutu){
//            case 'A':
//                System.out.println("Sangat baik");
//                
//            case 'B':
//                System.out.println("baik");
//                break:
//            case 'C':
//                System.out.println("cukup");
//                break;
//            case 'D':
//                System.out.println("kurang");
//                break:
//            default:
//                System.out.println("huruf mutu tidak sesuai");
//        }

        }while(true);
        
             
    }
    
}
