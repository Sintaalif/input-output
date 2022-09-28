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
public class Mahasiswa {
    public String nama;
    public String npm;
    private double nilaiUas;
    private double nilaiUts;
    
    
     public void insertNilaiUas(double nilai){
        nilaiUas = nilai;
    }
    public void insertNilaiUts(double nilai){
        nilaiUts = nilai;
    }
    
    public void dataMhs(){
        System.out.println("Nama      :" + nama);
        System.out.println("Npm       :" + npm);
        System.out.println("Nilai UAS :" + nilaiUas);
        System.out.println("Nilai UTS :" + nilaiUts);
        System.out.println("Nilai Akhir :" + nilaiAkhir());
    }
    
    public double nilaiAkhir(){
        double jumlah;
        jumlah = nilaiUts + nilaiUas;
        return jumlah/2;
}
}
