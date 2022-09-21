/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package sintaprak4pbo;

/**
 *
 * @author Praktikan
 */
public class SintaPrak4PBO {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        String firtsname = "Sinta";
        String lastname = "Nurhalifah";
        String ne = "slebeww";
        
        System.out.println();
        
        System.out.println(firtsname);
        System.out.println(lastname);
        System.out.println(ne);
        
        System.out.println();
        
        String Fullname = "Sinta" + " " + "Nurhalifah" + " " + "Slebeww";
        System.out.println(Fullname);
        
        System.out.println();
        
        String Fullname2 = firtsname + " " + lastname + " " + ne;
        System.out.println(Fullname2);
        
        System.out.println();
        
        String upper = Fullname.toUpperCase();
        String lower = Fullname.toLowerCase();
        System.out.println(upper);
        System.out.println(lower);
        
        System.out.println();
        
        int panjang = Fullname.length();
        System.out.println(panjang);
        
        System.out.println();
        
        System.out.println(Fullname.substring(2,4));
        
        System.out.println();
        
        int idx = Fullname.indexOf("nt");
        
        System.out.println(idx);
        
        System.out.println();
        
        System.out.println(Fullname.contains("sinta"));
        System.out.println(Fullname.equals("Sinta Nurhalifah"));
        
    }
    
}
