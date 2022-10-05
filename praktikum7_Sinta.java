/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package praktikum7_sinta;

/**
 *
 * @author Praktikan
 */
public class Praktikum7_Sinta {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Mahasiswa mhs = new Mahasiswa("sinta","21111111111111111111111",80,80,80);
        mhs.printData();
//        int result = mhs.sumValue(5,8);
//        System.out.println(result);
        
//        mhs.printData("Ilmu Komputer");
//        
        mhs.setNama("nt");
//        
          mhs.hitungNA();

//        
        System.out.println("Setelah diubah : " + mhs.getNama());
    
}
}
