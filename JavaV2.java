import java.util.Scanner;

public class EjercicioV2Java {

	public static void main(String args[]) {

		int a;
		System.out.println("Número de iteraciones: \n");
		Scanner num = new Scanner(System.in);
		a = num.nextInt();
		long lStartTime = System.nanoTime();
		for (int i = 1; i <= a; i++) {
			fibonacci(i);
//    System.out.print(fibonacci(i) +" ");
		}
		long lEndTime = System.nanoTime();
		long output = lEndTime - lStartTime;
		System.out.println("Elapsed time in milliseconds: " + output / 1000000);
	}

	public static int fibonacci(int number) {
		if (number == 1 || number == 2) {
			return 1;
		}
		return fibonacci(number - 1) + fibonacci(number - 2);
	}

}
