//10106 - product
import java.math.BigInteger;
import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        while (sc.hasNext()){

            BigInteger first, last;

            first = sc.nextBigInteger();
            last = sc.nextBigInteger();

            System.out.println(first.multiply(last));
        }
    }
}
