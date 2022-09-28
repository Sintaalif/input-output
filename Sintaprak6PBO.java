/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package sintaprak6pbo;

/**
 *
 * @author Praktikan
 */
public class SintaPrak6PBO {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Mahasiswa mhs = new Mahasiswa();
        
        mhs.nama = "Sinta Nurhalifah";
        mhs.npm = "2117051015";
        
//        System.out.println("Nama : " + mhs.nama);
//        System.out.println("NPM : " + mhs.npm);
        
        mhs.insertNilaiUas(800);
        mhs.insertNilaiUts(800);
        
//        System.out.println("Nilai Uas :" + mhs.nilaiUas);
//        System.out.println("Nilai Uts :" + mhs.nilaiUts);
        
        mhs.dataMhs();
    }
    
}
