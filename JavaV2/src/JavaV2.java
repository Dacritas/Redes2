import java.util.Scanner;

public class JavaV2 {

	public static void main(String args[]) {
		int count;
		int n1 = 0, n2 = 1, n3, i;

		System.out.println("Número de iteraciones V2: \n");
		Scanner num = new Scanner(System.in);
		count = num.nextInt();
		System.out.print(n1 + " " + n2);// printing 0 and 1

		long lStartTime = System.nanoTime();

		for (i = 2; i < count; ++i)// loop starts from 2 because 0 and 1 are
									// already printed
		{
			n3 = n1 + n2;
			System.out.print(" " + n3 + "\n");
			n1 = n2;
			n2 = n3;
		}

		long lEndTime = System.nanoTime();
		long output = lEndTime - lStartTime;
		System.out.println("Elapsed time in milliseconds: " + output / 1000000);
	}
}