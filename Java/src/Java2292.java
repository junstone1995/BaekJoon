import java.util.Scanner;

public class Java2292 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int sum = 1;
        int cnt = 1;
        while (sum < num) {
            sum += cnt++ * 6;
        }
        System.out.println(cnt);
    }
}
