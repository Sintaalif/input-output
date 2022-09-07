/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package praktikum2_sinta;

import java.util.Scanner;
import javax.swing.JOptionPane;

/**
 *
 * @author Praktikan
 */
public class Praktikum2_sinta {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int angka = 5;
        double angkaDouble = 2.5;
        float angkaFloat = 2.5f;
        long angkaLong = 20L;
        
        char karakter = 'c';
        String kata = "Ilkomp";
        
        boolean kondisi = true;
        
        double fromINT = angka;
        int fromDouble = (int) angkaDouble;
        
        System.out.println(angka);
        System.out.println(angkaDouble);
        System.out.println(angkaFloat);
        System.out.println(angkaLong);
        
        System.out.println(karakter);
        System.out.println(kata);
        
        System.out.println(kondisi);
        System.out.println(fromINT);
        System.out.println(fromDouble);
        
        Scanner inputUser= new Scanner(System.in);
        System.out.println("Tahun angkatan: ");
        int umur = inputUser.nextInt();
        
        inputUser.nextLine();
        System.out.println("Nama: ");
       String nama = inputUser.nextLine();
       
        System.out.println("Alamat");
        String alamat = inputUser.nextLine();
        
        System.out.println("Nama           : " + nama);
        System.out.println("Tahun angkatan : " + umur);
        System.out.println("Alamat          " + alamat);
        
        String NAMA = JOptionPane.showInputDialog("input nama anda");
        JOptionPane.showMessageDialog(null, "Hello" + NAMA); 

                
                
    }
    
}
