import java.util.Scanner;

public class EjercicioV1Java {

    public static void main(String[] args) { 
        int a;
        System.out.println("Número de iteraciones: \n");
        Scanner num = new Scanner(System.in);
        a = num.nextInt();
        int f = 0, g = 1;
        long lStartTime = System.nanoTime();

        for (int i = 1; i <= a; i++) {
            f = f + g;
            g = f - g;
            System.out.println(f); 
        }
        long lEndTime = System.nanoTime();
        long output = lEndTime - lStartTime;
        System.out.println("Elapsed time in milliseconds: " + output / 1000000);
    }
    
}